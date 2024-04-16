#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    char prev = s[0];
    int cnt =1;
    int ans = INT_MIN;
    for(int i =1;i<n;i++){
        if(s[i]==prev){
            cnt++;
        }
        else{
            ans = max(ans,cnt+1);
            prev = s[i];
            cnt = 1;
        }
    }
    ans = max(ans,cnt+1);
    if(ans==INT_MIN){
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
