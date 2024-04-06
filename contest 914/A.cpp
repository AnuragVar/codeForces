#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b;
    cin>>a>>b;

    int x,y;
    cin>>x>>y;
    int X,Y;
    cin>>X>>Y;

    set<pair<int,int>>s;
    s.insert({x-a,y-b});
    s.insert({x+a,y-b});
    s.insert({x-a,y+b});
    s.insert({x+a,y+b});
    s.insert({x-b,y-a});
    s.insert({x-b,y+a});
    s.insert({x+b,y-a});
    s.insert({x+b,y+a});
    int cnt =0;
    if(X-a!=x && Y-b!=y && s.find({X-a,Y-b})!=s.end()) {
        cnt++; 

    }
    if(X+a!=x && Y-b!=y && s.find({X+a,Y-b})!=s.end()) {
        cnt++;
        
        }
    if(X-a!=x && Y+b!=y && s.find({X-a,Y+b})!=s.end()) {
        cnt++;
        }
    if(X+a!=x && Y+b!=y && s.find({X+a,Y+b})!=s.end()) {
        cnt++;
        }
        if(a!=b){
    if(X-b!=x && Y-a!=y && s.find({X-b,Y-a})!=s.end()) {
        cnt++;
        }
    if(X-b!=x && Y+a!=y && s.find({X-b,Y+a})!=s.end()) {
        cnt++;
        }
    if(X+b!=x && Y-a!=y && s.find({X+b,Y-a})!=s.end()) {
        cnt++;
        
        }
    if(X+b!=x && Y+a!=y && s.find({X+b,Y+a})!=s.end()) {
        cnt++;
        
        }
        }
    cout<<cnt<<endl;

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
