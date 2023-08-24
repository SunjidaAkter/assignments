#include<bits/stdc++.h>
using namespace std;
int n,e;
typedef pair<int,int> pii;
const int N=1e3+5;
const int INF=1e9+10;
vector<pii>adj[N];
vector<pair<pii,int>>list_of_edges;
vector <int> dist(N,INF);
vector<bool>visited(N);
// void dijkstra(int source){
//     priority_queue<pii,vector<pii>,greater<pii>>pq;
//     dist[source]=0;
//     pq.push({dist[source],source});
//     while(!pq.empty()){
//         int u=pq.top().second;
//         pq.pop();
//         visited[u]=true;
//         for(pii vpair:adj[u]){
//             int v=vpair.first;
//             int w=vpair.second;
//             if(visited[v])continue;
//             if(dist[v]>dist[u]+w){
//                 dist[v]=dist[u]+w;
//                 pq.push({dist[v],v});
//             }
//         }
//     }
// }
void bellman_ford(int s){
    for(int i=1;i<=N;i++){
        dist[i]=INF;
    }
    dist[s]=0;
    for(int i=1;i<N;i++){
        for(auto edge:list_of_edges){
            int u=edge.first.first;
            int v=edge.first.second;
            int w=edge.second;
            if(dist[u]!=INF&&dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
            }
        }
    }
}
void reset(){
    for(int i=0;i<N;i++){
        dist[i]=INF;
        visited[i]=false;
    }
}
int main(){
    cin>>n>>e;
    while(e--){
        int u,v,w;cin>>u>>v>>w;
        list_of_edges.push_back({{u,v},w});
    }
    int s;cin>>s;
    bellman_ford(s);
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        if(dist[x]<=y )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
