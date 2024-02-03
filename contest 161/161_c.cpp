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
    

    int m;
    cin>>m;
    vector<pair<int,int>> v;
    for(int i =0;i<m;i++) {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    vector<int> front(n,0),back(n,0);
    front[1] = 1;
    back[n-2] =1;
    for(int i =1;i<n-1;i++){
        front[i+1] +=front[i];
        if(abs(a[i]-a[i-1])>abs(a[i]-a[i+1]))front[i+1]++;
        else front[i+1] += abs(a[i]-a[i+1]);
    }
    for(int i = n-2;i>0;i--){
        back[i-1] +=back[i];
        if(abs(a[i]-a[i-1])<abs(a[i]-a[i+1])) back[i-1]++;
        else back[i-1] += abs(a[i]-a[i-1]);
    }
    // cout<<endl;
    // for(int i =0;i<n;i++){
    //     cout<<front[i]<<" ";
    // }cout<<endl;
    // for(int i =0;i<n;i++) cout<<back[i]<<" ";
    // cout<<endl;
    for(auto it:v){
        if(it.first<it.second){
            cout<<front[it.second-1]-front[it.first-1]<<endl;
        }
        else{
            cout<<back[it.second-1]-back[it.first-1]<<endl;
        }
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
