#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<int> x(n-1);

    int i=0;
    while(i<n-1){
    cin>>x[i];
    i++;
    }

    int s = 1000;
    cout<<s<<" ";
    for(int i =0;i<n-1;i++){
        s += x[i];
        cout<<s<<" ";
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
