#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    
    ll n,k,b,s;
    cin>>n>>k>>b>>s;

    vector<ll> ans(n,0);
    ans[0] = k*b;
    s-=k*b;
    if(s<0) {
        cout<<"-1\n";
        return;
    }
    for(int i =0;i<n;i++){
        int ele = min(k-1,s);
        ans[i] += ele;
        s -= ele;
    }
    if(s>0) {
        cout<<"-1\n";
        return;
    }
    for(int i =0;i<n;i++){
        cout<<ans[i]<<" ";
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
