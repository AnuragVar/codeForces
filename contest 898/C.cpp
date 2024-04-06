#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
   
    int score = 0;
    for(int i =0;i<10;i++){
        for(int j =0;j<10;j++){
            char x;
            cin>>x;
            if(x=='X'){
                score +=( min(min(min(i,j),9-i),9-j)+1);
            }   
        }
    }
    cout<<score<<endl;
    
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
