#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<vector<char>> ans;
    for(int i =0;i<n;i++){
        vector<char> a;
        for(int j =0;j<n;j++){
            if((i&1)==(j&1)) {
                a.push_back('#');
                a.push_back('#');
            }
            else{
                a.push_back('.');
                a.push_back('.');
            }
        }
        ans.push_back(a);
        ans.push_back(a);
    }
    for(int i =0;i<ans.size();i++){
        for(int j =0;j<ans.size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
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
