#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;

    vector<int> a(n);
    int neg =0;
    int zero =0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[i]==0) zero++;
        if(a[i]<0) neg++;
    }
    if(zero!=0 || neg&1){
        cout<<0<<endl;
        return;
    }
    
    cout<<1<<endl;
    cout<<1<<" "<<0<<endl;
    
    
    


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
