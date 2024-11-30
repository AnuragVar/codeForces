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

#include <bits/stdc++.h>
using namespace std;



void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    vector<int> last(k,-1);
    vector<int> maxi(k),secmaxi(k);
    // for(int color = 1;color<=k;color++){
    for(int in = 0;in<n;in++){
        int step = in - last[c[in]-1]-1;
        if(maxi[c[in]-1]<=step) {
            secmaxi[c[in]-1] = maxi[c[in]-1];
            maxi[c[in]-1] = step;
        }
        else if(secmaxi[c[in]-1]<=step) secmaxi[c[in]-1] = step;
        last[c[in]-1] = in;
    }
    for(int in =0;in<k;in++){
        int step = n-last[in]-1;
        if(maxi[in]<=step) {
            secmaxi[in] = maxi[in];
            maxi[in] = step;
        }
        else if(secmaxi[in]<=step) secmaxi[in] = step;
    }
    int ans = 1e9;
    for(int in = 0;in<k;in++){
        ans = min(ans,max(maxi[in]/2,secmaxi[in]));
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}