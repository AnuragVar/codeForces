#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i =0;i<n;i++) cin>>p[i];

    bool done =0;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[i]==j+1 && p[j]==i+1){
                done =1;
                break;
            }
        }
    }
    if(done) cout<<2<<endl;
    else cout<<3<<endl;
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
