#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];

void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            if(visited[v]) continue;
            q.push(v);
            level[v] = level[u] + 1;
            visited[v] = true;
        }
    }
}

int main(){
    int m, n;
    cin >> n >> m;
    for(int i = 1; i <= m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        for (int i = 0; i <= N; i++) {
            visited[i] = false; 
            level[i]=0;
        }
        bfs(x);
        // if()
        if(x==y)cout<<0<<endl;
        else if(!visited[y])cout<<-1<<endl;
        else cout << level[y] << endl;
    }
    
    return 0;
}