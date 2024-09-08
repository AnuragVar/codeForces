#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    int ans =0;
    if(c=='g'){
        cout<<0<<endl;
        return;
    }
    int done =0;
    int st =0;
    for(int i =0;i<n;i++){
        if(s[i]==c && !done){
            st = i;
            done = 1;
        } 
        else if(s[i]=='g' && done){
            ans = max(ans,i-st);
            done = 0;
            // cout<<st<<" "<<i<<" "<<"hi"<<endl;
        }

    }
    if(done){
        int i =0;
        while(s[i]!='g') i++;
        ans = max(ans,i+n-st);
        // cout<<st<<" "<<i<<" "<<"hii"<<endl;

    }
    cout<<ans<<endl;

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
