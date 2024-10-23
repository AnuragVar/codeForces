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
    int n;
    cin>>n;
    vector<pair<ll,int>> a(n);
    vector<pair<ll,int>> b(n);
    vector<pair<ll,int>> c(n);

    for(int i = 0;i<n;i++) {
        ll x;
        cin>>x;
        a[i].first=x;
        a[i].second = i;
    }
    for(int i = 0;i<n;i++) {
        ll x;
        cin>>x;
        b[i].first=x;
        b[i].second = i;
    }
    for(int i = 0;i<n;i++) {
        ll x;
        cin>>x;
        c[i].first=x;
        c[i].second = i;
    }

    sort(a.begin(),a.end(),greater<pair<ll,int>>());
    sort(b.begin(),b.end(),greater<pair<ll,int>>());
    sort(c.begin(),c.end(),greater<pair<ll,int>>());
     
    ll ans = 0;
    for(int i = 0;i<3 && i<a.size();i++){
        for(int j = 0;j<3 && j<b.size();j++){
            for(int k = 0;k<3 && k<c.size();k++){
                if(a[i].second!=b[j].second && b[j].second!=c[k].second && c[k].second != a[i].second){
                    ans = max(ans,a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }
    cout<<ans<<endl;
    
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