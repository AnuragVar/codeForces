#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
//Clue - just search for ... pattern 
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1) 
    {
        cout<<(s[0]=='.')<<endl;
        return;
    }
    int cnt =(s[0]=='.')+(s[n-1]=='.');

    for(int i =1;i<n-1;i++){
        if(s[i]=='.'&& s[i-1]=='.'&& s[i+1]=='.'){
            cout<<2<<endl;
            return;
        }
        if(s[i]=='.')cnt++;
    }
    cout<<cnt<<endl;
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
