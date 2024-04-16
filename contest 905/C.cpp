#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    int even =0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(!(a[i]&1)) even++;
    }
    if(k==2){
        if(even!=0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
        return;
    }
    if(k==4){
        int mini = 1e9;
        for(int i=0;i<n;i++){
            if((a[i]%4)==0){
                cout<<0<<endl;
                return;
            }
            mini = min(mini,4-(a[i]%4));
        }
        if(even>=2){
            cout<<0<<endl;
        }
        else if(even==1){
            cout<<1<<endl;
        }
        else{
            if(mini<2){
                cout<<mini<<endl;
                return;
            }
            cout<<2<<endl;
        }
        return;
    }
    if(k==3){
        int mini = 1e9;
        for(int i =0;i<n;i++){
            if(a[i]%3==0){
                cout<<0<<endl;
                return;
            }
            mini = min(mini,3-(a[i]%3));
        }
        cout<<mini<<endl;
        return;
    }
    if(k==5){
        int mini = 1e9;
        for(int i =0;i<n;i++){
            if(a[i]%5==0){
                cout<<0<<endl;
                return;
            }
            mini = min(mini,5-(a[i]%5));
        }
        cout<<mini<<endl;
        return;
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
