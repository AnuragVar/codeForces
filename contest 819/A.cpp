#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i =0;i<n;i++) cin>>a[i];
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int ans = a[n-1]-a[0];
    for(int i =1;i<n;i++){
        ans = max((a[i-1]-a[i]),ans);
    }
    int maxi1= *max_element(a.begin()+1,a.end());
    int mini2= *min_element(a.begin(),a.end()-1);
    ans = max(ans,maxi1-a[0]);
    ans = max(ans,a[n-1]-mini2);
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
