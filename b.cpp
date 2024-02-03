#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int x,n;
    cin>>x>>n;
    // if(x%n==0){
    //     cout<<x/n<<endl;
    //     return ;
    // }
    int ans=1;
    for(int i =1;i*i<=x;i++){
        if(x%i==0){
            if((x/i)>=n){
                ans = max(ans,i);
            }
            if(i>=n){
                ans = max(ans,x/i);
            }
        }
        // cout<<i<<" "<<ans<<" ";
    }
    cout<<ans<<endl;
}
int main() {
//     ios_base::sync_with_stdio(false);cin.tie(NUint);cout.tie(NULL);
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
