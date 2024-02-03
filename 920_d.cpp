#include <bits/stdc++.h>
#include <functional>
using namespace std;
#define ll long long
#define mod 1000000007

// bool comp(ll &a,ll &b){
//     return a>b;
// }
void solve()
{
    int m,n;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    for(int i =0;i<n;i++) cin>>a[i];
    for(int i =0;i<m;i++) cin>>b[i];

    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<ll>());
    ll sum =0;
    for(int i =0;i<n;i++){
        sum +=abs(a[i]-b[i]);
    }
    ll ans = sum;
    int i = m-1,j = n-1;
    while(j>=0){
        sum-=abs(a[j]-b[j]);
        sum+=abs(a[j]-b[i]);
        ans = max(ans,sum);
        i--;
        j--;
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
