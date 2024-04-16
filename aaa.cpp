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
    vector<int> a;
    for(int i =0;i<n;i++){
        if(s[i]=='1'){
            int j = i;
            while(i<n && s[i]=='1'){
                i++;
            }
            a.push_back(i-j);
        }
    }

    int even =0;
    int odd =0;
    for(int i =0;i<a.size();i++){
        if(a[i]%2==0){
            if(a[i]==2)
            even++;
        }
        else{
            odd++;
        }
    }
    if(!(even&1)){
        if(odd&1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else{
        if(odd==1){
            cout<<"NO"<<endl;
        }
        else{
            if(odd&1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
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
