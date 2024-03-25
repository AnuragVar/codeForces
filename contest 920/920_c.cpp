#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,f,a,b;
    cin>>n>>f>>a>>b;
    
    vector<ll> v(n);
    for(int i =0;i<n;i++) cin>>v[i];

    ll need =0;
    if(v[0]*a>b) need = b;
    else need =v[0]*a;
    for(int i =1;i<n;i++){
        if(((v[i]-v[i-1])*a)<b){
            need +=((v[i]-v[i-1])*a);
            
        }
        else need += b;
    }
    if(need<f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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
