#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);

    cin>>a[0];
    cout<<a[0];
    if(n==1){
        cout<<endl;
        return;
        }
    else cout<<" ";
    ll odd =a[0]&1;
    ll sum =a[0];

    for(int i =1;i<n;i++){
        // cout<<sum<<" sum ";
        cin>>a[i];
        if(a[i]&1) odd++;
        sum+=a[i];
        if(odd%3==0||odd%3==2){
            cout<<sum-odd/3<<" ";
        }
        else if(odd%3==1){
            cout<<sum-odd/3-1<<" ";
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
