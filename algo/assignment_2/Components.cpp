#include<bits/stdc++.h>
using namespace std;

const int N=1e3+5;
vector<int>adj[N];
int visited[N];
set<int>s;
void dfs(int u){
    visited[u]=true;
    for(int v:adj[u]){
        if(visited[v])continue;
        s.insert(v);
        dfs(v);
    }
}

int main(){
    int m,n;cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>v;
    for(int i=0;i<N;i++){
        int sum=0;
        if(visited[i])continue;
        s.clear();
        s.insert(i);
        dfs(i);
        while(!s.empty()){
            sum++;
            s.erase(*s.begin());
        }
        if(sum<=1)continue;
        v.push_back(sum);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}