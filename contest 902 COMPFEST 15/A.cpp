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
    ll n,p;
    cin>>n>>p;

    vector<pair<int,int>> edges(n);
    for(int i =0;i<n;i++){
        cin>>edges[i].second; 
    }

    for(int i =0;i<n;i++){
        cin>>edges[i].first;
    }
    ll cnt = n;
    ll sum = 0;
    cnt--;
    sum+=p;
    if(n==0)
    {
        cout<<sum<<endl;
        return;
    }
    sort(edges.begin(),edges.end());
    if(p<=edges[0].first){
        cout<<1ll*p*n<<endl;
        return;
    }
    int i = 0;
    while(edges[i].first<p && cnt>0 && i<n){
        int currw = edges[i].first;
        int currn = edges[i].second;
        if(currn>cnt){
            sum += cnt*currw;
            cout<<sum<<endl;
            return;
        } 
        sum += currn*currw;
        cnt -=currn;
        i++;
    }
    if(cnt) sum += cnt*p;
    cout<<sum<<endl;
    return;

}

int main() {

    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}