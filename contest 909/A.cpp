#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

//Clue - it is not possible to move back to the multiple of 3, if already there
void solve()
{
    int n;
    cin>>n;
    if(n%3==0){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"First"<<endl;
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
