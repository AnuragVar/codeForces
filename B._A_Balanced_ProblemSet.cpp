#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll x,n;
    cin>>x>>n;
    if(x%n==0){
        cout<<x/n<<endl;
        return;
    }
    ll y = x/n;
    while(y){
        if(x%y==0){
            cout<<y<<endl;
            return;
        }
        y--;
    }
    cout<<1<<endl;
    return;
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
