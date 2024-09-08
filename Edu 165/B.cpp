#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    int st = -1;
    ll cnt =0;
    for(int i =0;i<n;i++){
        if(s[i]=='1' && st==-1) st=i;
        else if(s[i]=='0' && st!=-1){
            cnt +=i-st+1;
            st++;
        }
    }
    // if(st!=-1){
    //     cnt+=n-st;
    // }
    cout<<cnt<<endl;

}
int main() {
//      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
