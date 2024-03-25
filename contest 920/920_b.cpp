#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    string s,f;
    cin>>s>>f;
    int oe =0;
    int eo = 0;

    for(int i =0;i<n;i++){
        if(s[i]==f[i]) continue;
        else if(s[i]=='0') eo++;
        else oe++;
    }
    cout<<max(oe,eo)<<endl;
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
