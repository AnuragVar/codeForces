#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<ll> a(n);
    for(int i =0;i<n;i++) cin>>a[i];

    vector<ll> pre(n);
    vector<ll> post(n);
    pre[0] = a[0];
    post[n-1] = a[n-1];
    for(int i =1;i<n;i++){
        pre[i] += pre[i-1]+a[i];
        post[n-i-1] += post[n-i]+ a[n-i-1];  
    }
    vector<vector<int>> queries(q,vector<int>(3));
    for(int i =0;i<q;i++){
        cin>>queries[i][0]>>queries[i][1]>>queries[i][2];
    }
    // cout<<" pre "<<endl;
    // for(int i =0;i<n;i++){
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;
    // cout<<" post "<<endl;
    // for(int i =0;i<n;i++){
    //     cout<<post[i]<<" ";
    // }
    // cout<<endl;
    for(int i =0;i<q;i++){
        int l = queries[i][0];
        int r = queries[i][1];
        int k = queries[i][2];
        // cout<<" l "<<l<<" "<<r<<" "<<k<<endl;
        ll sum = k*(r-l+1) + ((l==1)?0:pre[l-2]) + ((r==n)?0:post[r]);
        // cout<<i<<" "<<sum<<endl;
        if(sum&1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
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
