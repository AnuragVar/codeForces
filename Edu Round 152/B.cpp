#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool comp(pair<ll,ll> &a, pair<ll,ll> &b){
    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}
void solve()
{
    int n;
    ll k;
    cin>>n>>k;
    vector<pair<ll,ll>> v(n);

    for(int i =0;i<n;i++){
        ll x;
        cin>>x;
        if(x%k==0) v[i].first= k;
        else v[i].first = x%k;
        v[i].second = i;
    }
    
    sort(v.begin(),v.end(),comp);
    for(int i =0;i<n;i++){
        cout<<v[i].second+1<<" ";
    }
    cout<<endl;
}
int main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
