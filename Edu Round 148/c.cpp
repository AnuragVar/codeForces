#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class DisjointSet {
    vector<int> rank, par, size;

    public:
    DisjointSet(int n) {
        rank.resize(n+1, 0);
        par.resize(n+1);
        size.resize(n+1, 1);
        for(int i = 0; i < n; i++) {
            par[i] = i;
        }
    }

    int findUPar(int node) {
        if(par[node] == node) return node;
        return par[node] = findUPar(par[node]);
    }

    void unionByRank(int u, int v) {
        int up_u = findUPar(u);
        int up_v = findUPar(v);
        if(up_u == up_v) return;
        if(rank[up_u] < rank[up_v]) {
            par[up_u] = up_v;
        } else if(rank[up_v] < rank[up_u]) {
            par[up_v] = up_u;
        } else {
            par[up_v] = up_u;
            rank[up_u]++;
        }
    }

    void unionBySize(int u, int v) {
        int up_u = findUPar(u);
        int up_v = findUPar(v);
        if(up_u == up_v) return;
        if(size[up_u] < size[up_v]) {
            par[up_u] = up_v;
            size[up_v] += size[up_u];
        } else {
            par[up_v] = up_u;
            size[up_u] += size[up_v];
        }
    }
};

int dijkstra(int n, vector<vector<pair<int,int>>> &adj, int source, int destination) {
    vector<int> dis(n, 1e9);
    dis[source] = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(source);

    while (!pq.empty()) {
        int node = pq.top();
        int dist = dis[node];
        pq.pop();

        for (auto& currAdj : adj[node]) {
            int weight = currAdj.second;
            int currAdjNode = currAdj.first;
            if (dist + weight < dis[currAdjNode]) {
                dis[currAdjNode] = dist + weight;
                pq.push(currAdjNode);
            }
        }
    }
    return dis[destination];
}

void solve()
{
    ll n;
    cin>>n;

    vector<ll> a(n);
    for(int i = 0;i<n;i++) {
        cin>>a[i];
    }

    n = unique(a.begin(),a.end())-a.begin();

    int ans = n;
    for(int i = 1;i<n-1;i++){
        if((a[i]>a[i-1] && a[i]<a[i+1]) || (a[i]<a[i-1] && a[i]>a[i+1])) ans--;
    }
    cout<<ans<<endl;
    // if(n==1 || !done) {
    //     cout<<1<<endl;
    //     return;
    // }

    // // if(a[0]==a[n-1]){
    // //     if(accumulate(a.begin(),a.end(),0*1ll)==n){
    // //         cout<<1<<endl;
    // //         return;
    // //     }
    // // }
    
    // int inc = 0;
    // int cnt = 1;
    // if(a[1]>=a[0]) inc = 1;

    // for(int i = 2;i<n;i++){
    //     if(a[i]>=a[i-1] && inc) {
    //         continue;
    //     }
    //     else if(a[i]<=a[i-1] && !inc) {
    //         continue;
    //     }
    //     else{
    //         cnt++;
    //         inc = !inc;
    //     }
    // }
    // cout<<cnt+1<<endl;
    // return;     
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}