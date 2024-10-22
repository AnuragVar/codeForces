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
    ll n,x;
    cin>>n>>x;
    ll or1=0,or2=0,or3=0;
    ll notx = ~x;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> c(n);
    int done= 0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(!done && !((or1|a[i])&notx)){
            or1 = or1|a[i];
        }
        else{
            done = 1;
        }
    }
    done = 0;
    for(int i =0;i<n;i++){
        cin>>b[i];
        if(!done && !((or2|b[i])&notx)){
            or2 = or2|b[i];
        }
        else{
            done = 1;
        }
    }
    done = 0;
    for(int i =0;i<n;i++){
        cin>>c[i];
        if(!done && !((or3|c[i])&notx)){
            or3 = or3|c[i];
        }
        else{
            done = 1;
        }
    }
    if(or1==x||or2==x||or3==x){
        cout<<"YES"<<endl;
    }
    else{
        if(((or1|or2)==x) || ((or3|or2)==x)|| ((or1|or3)==x)){
            cout<<"YES"<<endl;
        }
        else if((or1|or2|or3)==x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


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