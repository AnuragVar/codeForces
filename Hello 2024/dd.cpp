#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define MAX 100007
vector<int> a;
bool ok(int n){
    if(n==1) return 1;
    bool done = false;
    for(int it:a){
        if(n%it==0){
            done |= ok(n/it);
        }
    }
    return done;
}
void solve()
{
    int n;
    cin>>n;
    cout<<(ok(n)?"YES":"NO")<<endl;
}
int main() {
    for(int i =2;i<MAX;i++){
        bool yes = 1;
        int no = i;
        while(no){
            if((no%10)>1){
                yes =0;
                break;
            }
            no =no/10;
        }
        if(yes) a.push_back(i);
    }
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
