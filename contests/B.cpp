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
    int prev = a[0];
    int lastind =-1;
    vector<int> ans;
    for(int i=1;i<n;i++){
        if(a[i]!=prev){
            ans.push_back(i-lastind-1);
            lastind =i;
        }
    }
    if(lastind!=-1)
    ans.push_back(n-lastind-1);
    if(ans.size()==0){
        cout<<-1<<endl;
        return;
    }
    cout<<*min_element(ans.begin(),ans.end())<<endl;
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
