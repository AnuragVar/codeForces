#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
//Clue - Do by yourself
void solve()
{
    int n,k;
    cin>>n>>k;
    
    bool found =0;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        if(x==k){
            found =1;
        }
    }
    cout<<(found?"YES":"NO")<<endl;
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
