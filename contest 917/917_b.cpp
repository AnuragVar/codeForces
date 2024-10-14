#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int f(string s,int in,int n){
    int i = in;
    while(i+1<n && s[i]==s[i+1]) i++;
    if(i!=in) return i-in+1 + f(s,i+1,n);
    return max(f())
}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<f(s,0,n)<<endl;
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
