#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    ll cnt =0;

    
    vector<int> a(n);
    
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            cnt++;
        }
    }
    if(cnt==n){
        cout<<0<<endl;
    }
    else if(cnt==0){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
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
