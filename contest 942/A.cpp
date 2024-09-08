#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;

    vector<ll> a(n),b(n);
    for(int i =0;i<n;i++) cin>>a[i];
    for(int i =0;i<n;i++) cin>>b[i];
    int cnt = 0;
    for(int i =n-1;i>=0;i--){
        int l = upper_bound(a.begin(),a.end(),b[i])-a.begin()-1;

        // cout<<l<<" "<<i<<endl;
        cnt  = max(cnt,i-l);
    }
    cout<<cnt<<endl;

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
