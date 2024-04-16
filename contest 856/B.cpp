#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<ll>a (n);
    for(int i =0;i<n;i++) {
        cin>>a[i];
        a[i]++;
    }
        ll prev =a[0];
        cout<<a[0]<<" ";
        
        for(int i =1;i<n;i++){
            if(a[i]%prev){
                cout<<a[i]<<" ";
                prev = a[i];
            }
            else{
                cout<<a[i]+1<<" ";
                prev = a[i]+1;
            }
        }
        cout<<endl;
    
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
