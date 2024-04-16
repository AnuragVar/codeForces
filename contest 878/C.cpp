#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll nsum(ll n){
    return (n*(n+1))/2;
}
void solve()
{
    int n;
    ll k,q;
    cin>>n>>k>>q;
    
    vector<int>a;
    int cnt =0;
    for(int i =0;i<n;i++){
        ll x;
        cin>>x;
        if(x<=q) cnt++;
        else{
            if(cnt!=0) a.push_back(cnt);
            cnt=0;
        }
    }
    if(cnt!=0) a.push_back(cnt);
    ll ans =0;
    for(int i =0;i<a.size();i++){
        if(a[i]<k) continue;
        ans += nsum(a[i]-k+1);
    }
    cout<<ans<<endl;
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
