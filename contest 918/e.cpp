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
ll nCr(ll n, ll r) {
    // If r is greater than n, return 0
    if (r > n) return 0;
    // If r is 0 or equal to n, return 1
    if (r == 0 || n == r) return 1;
    // Initialize the logarithmic sum to 0
    double res = 0;
    // Calculate the logarithmic sum of the numerator and denominator using loop
    for (ll i = 0; i < r; i++) {
        // Add the logarithm of (n-i) and subtract the logarithm of (i+1)
        res += log(n-i) - log(i+1);
    }
    // Convert logarithmic sum back to a normal number
    return (ll)round(exp(res));
}
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);

    for(int i = 0;i<n;i++) cin>>a[i];
    

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