#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int length(int x){
    int y = x;
    int cnt =0;
    while(y){
        y = y/10;
        cnt++;
    }
    return cnt;
}
ll power(int n,int cnt){
    ll ans = 1;
    while(cnt){
        cnt--;
        ans*=n;
    }
    return ans;
}
void solve()
{
    ll x,y;
    cin>>x>>y;
    bool done =1;
    ll len = length(x);
    ll ans1 =0,ans2=0;
    ans1 = x/pow(10,len-1);
    ans2 = y/pow(10,len-1);
    if(ans2==ans1) done =0;
    if(ans2<ans1) swap(ans1,ans2);
    for(int i =1;i<len;i++){
        ll po = power(10,len-i-1);
        ll d1 = (floor(x/(1.0*po)));
        ll d2 = (floor(y/(1.0*po)));
        // cout<<po <<" " <<d1<<" "<<d2<<endl;
        d1 = d1%10;
        d2 = d2%10;

        ll maxi = max(d1,d2);
        ll mini = min(d1,d2);
        // cout<<x/po<<" "<<y/po<<" "<<maxi<<" "<<mini<<endl;
        // cout<<done<<" "<<mini<<" "<<maxi<<" "<<ans1<<" "<<ans2<<endl;
        if(done){
        ans1 = ans1*10 + maxi;
        ans2 = ans2*10 + mini;
        }
        else{
        ans1 = ans1*10 + mini;
        ans2 = ans2*10 + maxi;
        done =1;
        }
    }   
        cout<<ans1<<endl;
        cout<<ans2<<endl;
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
