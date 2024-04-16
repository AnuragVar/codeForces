#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int getHCF(int a, int b)
{
    return b == 0 ? a : getHCF(b, a % b); 
}

void solve()
{
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i =0;i<n;i++) cin>>p[i];
    vector<int> a;
    for(int i =0;i<n;i++){
        if((p[i]-(i+1)!=0))
        a.push_back(abs(p[i]-(i+1)));
    }
    if(a.size()==1){
        cout<<a[0]<<endl;
        return;
    }
    int ans = getHCF(a[0],a[1]);
    for(int i =2;i<a.size();i++){
        // cout<<a[i]<<" ";
        ans = getHCF(ans,a[i]);
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
