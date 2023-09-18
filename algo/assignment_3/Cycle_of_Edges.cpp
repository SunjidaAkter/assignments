// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N=1e5+5;
// int parent[N];
// int parentSize[N];
// void dsu_set(int n){
//     for(int i=1;i<=n;i++){
//         parent[i]=-1;
//         parentSize[i]=1;
//     }
// }
// int dsu_find(int n){
//     while(parent[n]!=-1){
//         n=parent[n];
//     }
//     return n;
// }
// void dsu_union(int a,int b){
//     int leaderA=dsu_find(a);
//     int leaderB=dsu_find(b);
//     if(leaderA!=leaderB){
//         if(parentSize[leaderA]>parentSize[leaderB]){
//             parent[leaderB]=leaderA;
//             parentSize[leaderA]+=parentSize[leaderB];
//         }else{
//             parent[leaderA]=leaderB;
//             parentSize[leaderB]+=parentSize[leaderA];
//         }
//     }
// }
// int main(){
//     int n,e;cin>>n>>e;
//     dsu_set(n);
//     int cnt=0;
//     while(e--){
//         int a,b;cin>>a>>b;
//         int leaderA=dsu_find(a);
//         int leaderB=dsu_find(b);
//         if(leaderA==leaderB)cnt++;
//         else dsu_union(a,b);
//     }
//     cout<<cnt;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int parent[1000];
int parentLevel[1000];
void dsu_set(int n){
    for(int i=1; i<=n; i++){
        parent[i]=-1;
        parentLevel[i]=0;
    }
}
int dsu_find(int node){
    while (parent[node]!=-1)
    {
         node=parent[node];
    }
    return node;

    
} 
void dsu_union(int a,int b){
    int  leaderA=dsu_find(a);
    int leaderB=dsu_find(b);
    if(leaderA!=leaderB){   
        if(parentLevel[leaderA]>parentLevel[leaderB]){
            parent[leaderB]=leaderA;
            parentLevel[leaderA]+=parentLevel[leaderB];
        }
        
        else {
            parent[leaderA]=leaderB;
            parentLevel[leaderB]+=parentLevel[leaderA];
        }
        
        
    }
} 
int main(){

     int n,e;
     cin>>n>>e;
     dsu_set(n);
     int ans=0;
     while (e--)
     {
         int a,b;
         cin>>a>>b;
          int  leaderA=dsu_find(a);
          int leaderB=dsu_find(b);
          if(leaderA == leaderB){
            ans++;
          }
          else{
            dsu_union(a,b);
            
          }
         

     }

     cout<<ans<<endl;
     
    return 0;
}
