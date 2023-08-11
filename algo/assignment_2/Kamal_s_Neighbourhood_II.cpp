#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            // cout<<visited[v]<<" ";
            if(visited[v])continue;
            q.push(v);
            level[v]=level[u]+1;
            visited[v]=true;
        }
    }
}
int main(){
    int m,n;cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        // adj[v].push_back(u);
    }
    int x;cin>>x;
    int sum=0;
    bfs(x);
    vector<int>v;
    for (int i = 0; i < n; ++i) {
        if (level[i] > 0) {
            sum++;
        }
    }
cout<<sum;
    
    return 0;
}