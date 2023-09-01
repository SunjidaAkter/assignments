#include<bits/stdc++.h>
using namespace std;
class Edge{
public:
    int u;
    int v;
    long long int w;
    Edge(int u,int v,long long int w){
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
int main(){
    int n,e;
    cin>>n>>e;
    vector<Edge>v;
    while(e--){
        int a,b,w;cin>>a>>b>>w;
        Edge ed(a,b,w);
        v.push_back(ed);
    }
    long long int dis[n+1];
    for(int i=0;i<=n;i++){
        dis[i]=LONG_MAX;
    }
    int s;cin>>s;
    dis[s]=0;
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<v.size();j++){
            Edge ed=v[j];
            int a=ed.u;
            int b=ed.v;
            int w=ed.w;
            if(dis[a]!=LONG_MAX&&dis[a]+w<dis[b]){
                dis[b]=dis[a]+w;
            }
        }
    }
    bool cycle=false;
    for(int j=0;j<v.size();j++){
        Edge ed=v[j];
        int a=ed.u;
        int b=ed.v;
        long long int w=ed.w;
        if(dis[a]<LONG_MAX && dis[a]+w<dis[b]){
            cycle=true;
            break;
        }
    }
    if(cycle)cout<<"Negative Cycle Detected"<<endl;
    else {
        int t;cin>>t;
        while(t--){
            int d;cin>>d;
            if(dis[d]==LONG_MAX)cout<<"Not Possible"<<endl;
            else cout<<dis[d]<<endl;
        }
        
    }
    return 0;
}
