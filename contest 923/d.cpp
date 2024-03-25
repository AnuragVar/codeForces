#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    int m;
    cin>>m;
    vector<pair<int,int>> q(m);
    for(int i =0;i<m;i++){
        cin>>q[i].first>> q[i].second;
        // cout<<q[i].first<<" "<<q[i].second<<endl;
    }
    for(int i=0;i<m;i++){
        unordered_map<int,int> mp;
        bool done =0;
        for(int j =q[i].first-1;j<q[i].second;j++){
            mp[a[j]]=j;
            if(mp.size()>=2){
                done =1;
                int no =2;
                for(auto it:mp){
                    no--;
                    cout<<it.second+1<<" ";
                    if(no==0){
                        cout<<endl;
                    break;
                }
                }
            }
            if(done==1)break;
        }
        if(done==0){
            cout<<-1<<" "<<-1<<endl;
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
