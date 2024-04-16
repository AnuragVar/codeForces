#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int get_ans(int n,vector<int> A,int q,int t,vector<vector<int>>queries){
        vector<vector<int>> value(n,vector<int>(21,0));
        for(int i =1;i<n;i++){
            for(int j =1;j<21;j++){
                value[i][j]+=value[i-1][j];
            }
            value[i]
        }
        for(int i =0;i<q;i++){
            int l = queries[i][1];
            int r = queries[i][2];
            if(queries[i][0]==2){
                int val1 = A[l];
                int val2 = A[r];
                for(int i =l;i<=r;i++){
                    value[i][val2]++;
                    value[i][val1]--;
                }
            }
        }
    }
   
    
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
