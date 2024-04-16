#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool comp(pair<int,int> &a,pair<int,int> &b){
    if(a.first!=b.first)
    return a.first<b.first;
    return a.second>b.second;
}
void solve()
{
    int n,p;
    cin>>n>>p;
    vector<pair<int,int>> v(n);

    for(int i =0;i<n;i++){
        cin>>v[i].second;
    }

    for(int i =0;i<n;i++){
        cin>>v[i].first;
    }
    sort(v.begin(),v.end(),comp);
    

    ll ans = 0;
    ll r = n;
    int i =0;
    while(r){
        ans += p;
        r--;
        if(v[i].first<p){
            if(v[i].second>=r){
                ans += v[i].first*r;
                break;
            }
            else{
                ans += v[i].first*v[i].second;
                r -= v[i].second;
                i++;
            }
        }
        else{
            ans += p*r;
            break;
        }
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
