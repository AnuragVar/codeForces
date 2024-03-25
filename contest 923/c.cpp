#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int i =0;i<n;i++) cin>>a[i];
    for(int i =0;i<m;i++) cin>>b[i];
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll an_b=0,_anb=0,anb=0;
    int i =0,j=0;
    int mov =1;
    while(i<n && a[i]<=k){
        if((i==0 || a[i]!=a[i-1]))
        an_b++;
        i++;
    }
    while(j<m && b[j]<=k){
        if((j==0 || b[j]!=b[j-1]))
        _anb++;
        j++;
    }
    set<int> s;
    i =0,j=0;
    while(i<n && j<m){
        if(a[i]==b[j] && a[i]<=k){
            
            s.insert(a[i]);
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            i++;
        }else{
            j++;
        }
        if(a[i]>k && b[j]>k){
            break;
        }
    }
    anb = s.size();
    an_b = an_b-anb;
    _anb  = _anb-anb;
    // cout<<an_b<<" "<<_anb<<" "<<anb<<endl;
    if(an_b + _anb + anb>=k && (an_b+anb)>=k/2 && (_anb+anb)>=k/2){
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
