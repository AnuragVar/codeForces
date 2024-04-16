#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll mini=1e9;
    vector<ll> secondMin(n);
for(int i =0;i<n;i++){
    int x;
    cin>>x;
    vector<ll> input(x);

    for(int j =0;j<x;j++){
        cin>>input[j];
    }

    sort(input.begin(),input.end());
    
    mini = min(input[0],mini);
    secondMin[i] = input[1];
}
    //sometimes there is the problem in accumulate
    ll tot =0;
    for(int i =0;i<secondMin.size();i++) tot+=secondMin[i];
    ll total = tot-1ll*(*min_element(secondMin.begin(),secondMin.end()))+mini;
    cout<<total<<endl;
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
