#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll x,y,n;
    cin>>n>>x>>y;

    vector<int> a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    unordered_map<pair<int,int>,int> m;
    int ans;
    for(auto i:a){
        int xx = i%x;
        int yy = i%y;
        ans +=m[{(x-xx)%x,yy}]
        m[{xx,yy}]++;
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
