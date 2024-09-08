#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    ll d;
    cin>>n>>d;

    vector<ll> p(n);
    for(int i =0;i<n;i++) cin>>p[i];

    sort(p.begin(),p.end());

    int i = 0;
    ll cnt =0;
    for(int j=n-1;j>=i;j--){
        int a = ceil((d+1)/(p[j]*1.0));
        i += a-1;
        if(i<=j){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return;
}
int main() {
//     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    ll test=1;
// cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
