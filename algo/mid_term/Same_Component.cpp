// #include<bits/stdc++.h>
// using namespace std;
// typedef pair<int,int>pii;
// int m,n;
// typedef pair<int,int>pii;
// const int N=1e3+10;
// vector<string>g;
// int visited[N][N];
// int level[N][N];
// pii parents[N][N];
// vector<pii>direc={{0,1},{0,-1},{1,0},{-1,0}};
// bool is_valid(int i,int j){
//     return (i>=0&&i<m&&j>=0&&j<n);
// }
// void dfs(int si,int sj){
//     if(!is_valid(si,sj))return;
//     if(visited[si][sj])return;
//     if(g[si][sj]=='-')return;
//     visited[si][sj]=true;
//     for(auto d:direc){
//         dfs(si+d.first,sj+d.second);
//     }
// }
// int main(){
//     int si,sj,di,dj;
//     cin>>m>>n;
//     for(int i=0;i<m;i++){
//         string x;cin>>x;
//         g.push_back(x);
//     }
//     cin>>si>>sj>>di>>dj;
//     dfs(si,sj);
//     if(visited[di][dj]){
//         cout<<"YES";
//     }else cout<<"NO";
//     return 0;
// }
#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;
int n, m;
const int N = 1000;
bool vis[N][N];
char a[N][N];
vector<pi> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool isValid(int cI, int cJ)
{
    return (cI >= 0 && cI < n && cJ >= 0 && cJ < m );
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    if(vis[si][sj])return;
    if(!isValid)return;
    if(a[si][sj]=='-')return;
    for (int i = 0; i < 4; i++)
    {
        pi p = path[i];
        int ci = si + p.first;
        int cj = sj + p.second;
           dfs(ci, cj);
     
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
     
     int si,sj,di,dj;
     cin>>si>>sj>>di>>dj;
     dfs(si,sj);
    
      if(vis[di][di]){
        cout<<"YES";
     }
     else{
        cout<<"NO";
     }
    
    return 0;
}