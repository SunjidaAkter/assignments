// #include<bits/stdc++.h>
// using namespace std;
// typedef pair<int,int>pii;
// int n,m;
// const int N=1e2+10;
// int visited[N][N];
// int level[N][N];
// vector<pii>direc={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
// bool is_valid(int i,int j){
//     return (i>=0&&i<n&&j>=0&&j<m);
// }
// void bfs(int si,int sj){
//     queue<pii>q;
//     q.push({si,sj});
//     visited[si][sj]=true;
//     level[si][sj]=0;
//     while(!q.empty()){
//         int ui=q.front().first;
//         int uj=q.front().second;
//         q.pop();
//         for(pii d:direc){
//             int vi=ui+d.first; 
//             int vj=uj+d.second;
//             if(is_valid(vi,vj) && !visited[vi][vj]){
//                 q.push({vi,vj});
//                 visited[vi][vj]=true;
//                 level[vi][vj]=level[ui][uj]+1;
//             }
//         }
//     }
// }
// void reset_visit(){
//     for(int i=0;i<N;i++){
//         for(int j=0;j<N;j++){
//             level[i][j]=0;
//             visited[i][j]=false;
//         }
//     }
// }
// int main(){
//     int t;cin>>t;
//     while(t--){
//         cin>>n>>m;
//         int si,sj,di,dj;
//         cin>>si>>sj>>di>>dj;
//         bfs(si,sj);
//         if(!visited[di][dj])cout<<-1<<endl;
//         else cout<<level[di][dj]<<endl;
//         reset_visit();   
//     }
//     return 0;
// }

     
     

#include<bits/stdc++.h>
using namespace std;

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
typedef pair<int,int> pii;
const int N = 1e3+10;
     
bool visited[N][N];
int level[N][N];
int n,m;
vector<pii> direc = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};

bool isValid(int i, int j)
{
  return (i>=0 && i<n && j>=0 && j<m);
}

void bfs(int si, int sj)
{
  queue<pii> q;
  q.push({si,sj});
  visited[si][sj] = true;
  level[si][sj] = 0;

  while(!q.empty())
  {
    pii upair = q.front();
    int i = upair.first;
    int j = upair.second;
    q.pop();

    for(auto d:direc)
    {
      int ni = i+d.first;
      int nj = j+d.second;

      if(isValid(ni,nj) && !visited[ni][nj])
      {
        q.push({ni,nj});
        visited[ni][nj] = true;
        level[ni][nj] = level[i][j]+1;
         
      }
    }
  }
}

void reset_level_vis(){
     for(int i=0; i<8; i++){
            
            for(int j=0; j<8; j++){
                level[i][j]=0;
                visited[i][j]=false;
            }
        }    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
         int  si,sj,di,dj;
         cin>>n>>m>>si>>sj>>di>>dj;
          
         bfs(si,sj);
         if(!visited[di][dj])cout<<-1<<endl;
         else cout<<level[di][dj]<<endl;
         reset_level_vis();

    }
    

     
     

   return 0;
    
}