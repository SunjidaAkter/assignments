#include<bits/stdc++.h>
using namespace std;
int n,e;
typedef pair<int,int> pii;
const long long int N=1e3+5;
const int INF=1e9+10;
vector<pii>adj[N];
vector<pair<pii,int>>list_of_edges;
vector <int> dist(N,INF);
vector<bool>visited(N);
void dijkstra(int source){
    priority_queue<pii,vector<pii>,greater<pii>>pq;
    dist[source]=0;
    pq.push({dist[source],source});
    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        visited[u]=true;
        for(pii vpair:adj[u]){
            int v=vpair.first;
            int w=vpair.second;
            if(visited[v])continue;
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
}
int main(){
    cin>>n>>e;
    for(int i=0;i<e;i++){
        int u,v,w;cin>>u>>v>>w;
        adj[u].push_back({v,w});
        // adj[v].push_back({u,w});
    }
    int s;cin>>s;
    dijkstra(s);
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        if(dist[x]<=y )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
