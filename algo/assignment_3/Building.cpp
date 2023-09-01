#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Edge{
    public:
    int a,b,w;
    Edge(int a,int b,int w){
        this->a=a;
        this->b=b;
        this->w=w;
    }

};
bool cmp(Edge a,Edge b){
    return a.w<b.w;
} 
const int N=1e5+5;
int parent[N];
int parentSize[N];
void dsu_set(int n){
    for(int i=1;i<=n;i++){
        parent[i]=-1;
        parentSize[i]=1;
    }
}
int dsu_find(int n){
    while(parent[n]!=-1){
        n=parent[n];
    }
    return n;
}
void dsu_union(int a,int b){
    int leaderA=dsu_find(a);
    int leaderB=dsu_find(b);
    if(leaderA!=leaderB){
        if(parentSize[leaderA]>parentSize[leaderB]){
            parent[leaderB]=leaderA;
            parentSize[leaderA]+=parentSize[leaderB];
        }else{
            parent[leaderA]=leaderB;
            parentSize[leaderB]+=parentSize[leaderA];
        }
    }
}
int main(){
    int n,e;cin>>n>>e;
    vector<Edge>v;
    vector<Edge>ans;
    dsu_set(n);
    while(e--){
        int a,b,w;cin>>a>>b>>w;
        v.push_back(Edge(a,b,w));
    }
    ll sum=0; 
    sort(v.begin(),v.end(),cmp);
    for(Edge val:v){
        int a=val.a;
        int b=val.b;
        int w=val.w;
        int leaderA=dsu_find(a);
        int leaderB=dsu_find(b);
        if(leaderA==leaderB)continue;
        ans.push_back(val);
        dsu_union(a,b);
    }
    for(Edge val:ans){
        sum+=(ll)(val.w);
    }
    if(ans.size()==n-1)cout<<sum;
    else cout<<-1;
    return 0;
}
