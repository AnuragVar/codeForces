#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,k,x;
    cin>>n>>k>>x;
    ll left = n-k;
    if(x<(1ll*k*(k+1)/2) || x>((1ll*n*(n+1)/2) -(1ll*left*(left+1)/2)) ){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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
