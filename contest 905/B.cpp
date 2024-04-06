#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> ch(26,0);
    vector<int> odd;
    for(int i =0;i<s.size();i++)ch[s[i]-'a']++;

    for(int i =0;i<26;i++){
        if(ch[i]&1){
            odd.push_back(ch[i]);
        }
    }
   
    if(odd.size() && k<odd.size()-1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
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
