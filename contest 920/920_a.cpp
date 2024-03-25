#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    vector<pair<int,int>> v(4);
    for(int i=0;i<4;i++){
        int x,y;
        cin>>x>>y;
        v[i] ={x,y};
    }
    sort(v.begin(),v.end());
    cout<<(v.back().first-v[0].first)*(v[1].second-v[0].second)<<endl;
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
