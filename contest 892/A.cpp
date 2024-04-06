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

    sort(a.begin(),a.end());
    if(a.front()==a.back()){
        cout<<-1<<endl;
        return;
    }
    int i =1;
    while(a[i]==a[0]) i++;
    cout<<i<<" "<<n-i<<endl;
    for(int j =0;j<i;j++)cout<<a[0]<<" ";
    cout<<endl;
    for(int j = i;j<n;j++)cout<<a[j]<<" ";
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
