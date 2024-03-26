#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
//Clue - only possible when possibility of making sums are two only
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> m;
    for(int i =0;i<n;i++) {
        cin>>a[i];
        m[a[i]]++;
    }
    if(m.size()>2){
        cout<<"NO"<<endl;
        return;
    }
    if(m.size()==1){
        cout<<"YES"<<endl;
        return;
    }
    auto it = m.begin();
    int firstFreq = it->second;
    it++;
    int secondFreq = it->second;
    if(abs(firstFreq-secondFreq)<=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
