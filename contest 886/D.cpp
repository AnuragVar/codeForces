#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
     ll n,k;
    cin>>n>>k;
    
    vector<ll> pr;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        pr.push_back(x);
    }
    sort(pr.begin(),pr.end());
    int ans =INT_MAX;
    int cnt =1;
    int prev = pr[0];
    for(int i =1;i<n;i++){
            if(abs(pr[i]-prev)<=k){
                cnt++;
                prev = pr[i];
            }
            else{
                int h = n-cnt;
                ans = min(ans,h);
                cnt =1;
                prev = pr[i];
            }
    }
    int h = n-cnt;
    ans = min(ans,h);
    if(ans == INT_MAX){
        cout<<0<<endl;
    }
    else{
        cout<<ans<<endl;
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
