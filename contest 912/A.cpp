//Problem Clue - Any array can be sorted by bubble sort, i.e. the same thing with k = 2, 
// T.C. = O(n)
// S.C. = O(1)

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    int up =1;
    int last;
    cin>>last;
    for(int i =1;i<n;i++) {
        cin>>a[i];
        if(a[i]<last) up = 0;
        last = a[i];
    }


    if(k==1 && up==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long test=1;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
