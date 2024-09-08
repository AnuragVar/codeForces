#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i =0;i<n;i++) cin>>a[i];
    for(int i =0;i<n;i++) cin>>b[i];

    vector<int> fa(2*n+1,0);
    vector<int> fb(2*n+1,0);
    int ans =1;
    int p = 0;
    for(int i=1;i<n;i++){
        if(a[i-1]!=a[i]){
            fa[a[i-1]] = max(fa[a[i-1]],i-p);
            p = i;
        }
    }
    fa[a[n-1]] = max(fa[a[n-1]],n-p);

    p = 0;
    for(int i=1;i<n;i++){
        if(b[i-1]!=b[i]){
            fb[b[i-1]] = max(fb[b[i-1]],i-p);
            p = i;
        }
    }
    fb[b[n-1]] = max(fb[b[n-1]],n-p);
    
    for(int i =0;i<2*n+1;i++){
        ans = max(ans,fa[i]+fb[i]);
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
