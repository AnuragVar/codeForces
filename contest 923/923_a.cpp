#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int st = -1;
    int en = -1;
    for(int i=0;i<n;i++){
        if(st==-1 && s[i]=='B') {
            st = i;
        }
        if(s[i]=='B'){
            en = i;
        }
    }
    if(st==-1){
        cout<<0<<endl;
    }
    else{
        cout<<en-st+1<<endl;
    }
    // cout<<st<<" "<<en<<endl;

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
