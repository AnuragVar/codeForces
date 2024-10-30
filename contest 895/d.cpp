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
    ll n,x,y;
    cin>>n>>x>>y;
    ll total = 0;
    ll st = 1;
    ll en = n;
    // 1. count no. of indices divided by x
    // 2. count no. of indices divided by y
    // 3. count no. of indices divided by lcm(x,y)

    ll ansx = n/x;
    ll ansy = n/y;
    ll lcm = (x*y)/(__gcd(x,y));
    ll anslcm = n/lcm;
    // cout<<ansx<<" "<<ansy<<" "<<anslcm<<endl;
    ansx -=anslcm;
    ansy -=anslcm;
    ll sum1 = 0.5*(ansy)*(2 + (ansy-1));
    ll sum2 = 0.5*ansx*(2*n+(ansx-1)*(-1));
    cout<<sum2-sum1<<endl;
    // for(int i = 1;i*i<=n;i++){
    //     if(((i%x)==0 )&& ((i%y)==0)){
    //     }
    //     else if((i%x)==0){
    //         total += en;
    //         en--;
    //     }
    //     else if((i%y)==0){
    //         total -=st;
    //         st++;
    //     }
    // }
    // cout<<total<<endl;
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