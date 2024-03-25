#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int gcd(int x,int y){
    if(x==1) return y;
    return gcd(y,x%y);
}
void solve()
{
    ll x,y;
    cin>>x>>y;
    ll hcf = __gcd(x,y);
    ll lcm =(x*y)/(hcf);
    cout<<x<<" "<<y<<" "<<hcf<<" "<<lcm<<endl;
    if(x==1){
        cout<<y*y<<endl;
        return;
    }
    else if(hcf!=1){
        if(lcm==y){
            cout<<y*2<<endl;
        }
        else{
            cout<<lcm<<endl;
        }
    }
    else{
        cout<<x*y<<endl;
    }
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
