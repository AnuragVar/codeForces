#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i =0;i<n;i++){
        cin>>v[i].first;
    }
    for(int i =0;i<n;i++){
        cin>>v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i =0;i<n;i++){
        cout<<v[i].first<<" ";
    }
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<v[i].second<<" ";
    }
    cout<<endl;
    
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
