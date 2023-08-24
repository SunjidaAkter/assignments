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
//         if(!visited[di][dj])cout<<-1;
//         else cout<<level[di][dj]<<endl;
//         reset_visit();   
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};

bool isValid(int x, int y, int n, int m) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int minStepsToAttack(int n, int m, int ki, int kj, int qi, int qj) {
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int, int>> q;

    q.push({ki, kj});
    dist[ki][kj] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == qi && y == qj) {
            return dist[x][y];
        }

        for (int i = 0; i < 8; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];

            if (isValid(newX, newY, n, m) && dist[newX][newY] == -1) {
                dist[newX][newY] = dist[x][y] + 1;
                q.push({newX, newY});
            }
        }
    }

    return -1; // Queen cannot be reached
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;
        
        int steps = minStepsToAttack(n, m, ki, kj, qi, qj);
        cout << steps << endl;
    }

    return 0;
}
