#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++) cin>>a[i];

    string res ="";
    vector<int> ans(26,0);
    for(int i =0;i<n;i++){
        for(int j=0;j<26;j++){
            if(ans[j]==a[i]){
                res+=(j+'a');
                ans[j]++;
                break;
            }
        }
    }
    cout<<res<<endl;
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
