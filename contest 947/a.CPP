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
    int done =0;
    int prev = a[1]>a[0]?1:0;
    
    for(int i =1;i<n;i++){
        if((a[i+1]>=a[i] && prev)||(a[i+1]<=a[i] && !prev)){
            continue;
        }
        else{
            prev !=prev;
            i++;
            for(;i<n;i++){
                if((a[i+1]>=a[i] && prev)||(a[i+1]<=a[i] && !prev)){
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
            }
        }
    }
        cout<<"YES"<<endl;
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
