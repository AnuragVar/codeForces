#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    string v = "AM";
    int hr = stoi(s.substr(0,2));
    int mi = stoi(s.substr(3,2));
    if(hr==12) v="PM";
    if(hr>12){
        hr = hr-12;
        v = "PM";
    }
    else if(hr==0){
        hr = 12;
    }
    string ans="";
    if(hr<10) ans +="0";
    ans += to_string(hr)+":";
    
    if(mi<10) ans+="0";
    ans+=to_string(mi);
    cout<<ans<<" "<<v<<endl;
  
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
