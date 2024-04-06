#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    a +=c/2;
    b +=c/2;
    a+=(c&1);
    if(a>b){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
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
