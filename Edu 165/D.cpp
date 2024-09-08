#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k;
    cin>>n>>k;

    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i =0;i<n;i++) cin>>b[i];
    vector<ll>c; 

    ll cnta =0;
    for(int i =0;i<n;i++){
        if(a[i]<b[i]){
            c.push_back({b[i]-a[i],b[i]});
            cnta+=a[i];
        }
    }
    sort(c.begin(),c.end());
    int m = c.size();
    ll cntb =0;
    for(int i =0;i<m-k;i++){
        cntb+=c[i];
    }
    cout<<cntb-cnta<<endl;
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
