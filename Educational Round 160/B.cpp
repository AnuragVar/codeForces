#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    int one =0;
    int zero = 0;
    for(auto it:s){
        if(it=='0') zero++;
        else one++;
    }
    int n=s.size();
    for(int i =0;i<n;i++){
        if(s[i]=='0'){
            if(one==0){
                cout<< n-i<<endl;
                return;
            }
            one--;
        }
        else{
            if(zero==0){
                cout<< n-i<<endl;
                return;
            }
            zero--;
        }
    }
    cout<<0<<endl;
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
