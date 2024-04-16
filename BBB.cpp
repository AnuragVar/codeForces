#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll> a(n);
    
    for(int i =0;i<n;i++){
       cin>>a[i];   
    }
    ll mine = a[k-1];
    int i=0;
    while(i<n && a[i]<=mine){
        i++;
    }
    int ans1;
    if(k<=i){
        ans1=i-1;
    }
    else{
    ans1 =i;
    }
    int maxi;
    for(int i =1;i<a.size();i++){
        if(a[i]>=a[k-1]) maxi = i;
    }
    swap(a[i],a[maxi]);
    int ans2;
    



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
