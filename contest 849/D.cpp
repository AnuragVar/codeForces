#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int> forw(n,0);
    vector<int> backw(n,0);
    forw[0] =1;
    set<char> st;
    st.insert(s[0]);
    for(int i =1;i<n;i++){
        st.insert(s[i]);
        forw[i] = st.size();
    }
    st.clear();

    backw[n-1] = 1;
    st.insert(s[n-1]);
    for(int i =n-2;i>=0;i--){
        st.insert(s[i]);
        backw[i] = st.size();
    }
    
    int ans =0;
    for(int i=0;i<n-1;i++){
        ans = max(ans,forw[i]+backw[i+1]);
    }
    cout<<ans<<endl;
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
