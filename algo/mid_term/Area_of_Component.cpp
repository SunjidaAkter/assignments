#include<bits/stdc++.h>
using namespace std;
int m,n;
typedef pair<int,int>pii;
const int N=1e3+10;
vector<string>g;
int visited[N][N];
int level[N][N];
vector<pii>direc={{0,1},{0,-1},{1,0},{-1,0}};
bool is_valid(int i,int j){
    return (i>=0&&i<m&&j>=0&&j<n);
}
set<pii>s;
void dfs(int si,int sj){
    if(!is_valid(si,sj))return;
    if(visited[si][sj])return;
    if(g[si][sj]=='-')return;
    s.insert({si,sj});
    visited[si][sj]=true;
    for(auto d:direc){
        dfs(si+d.first,sj+d.second);
    }
}
int main(){
    int si,sj,di,dj;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        string x;cin>>x;
        g.push_back(x);
    }
    int cc=0;
    set<int>ss;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j])continue;
            s.clear();
            dfs(i,j);
            if(s.size()!=0)ss.insert(s.size());
            cc++;
        }
    }
    if(ss.size()==0)cout<<-1;
    else cout<<*(ss.begin())<<endl;
    return 0;
}