#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }    
};
Node* input_tree(){
    int val;
    cin>>val;
    Node* root;
    if(val==-1)root=NULL;
    else root=new Node(val);
    queue<Node* >q;
    if(root)q.push(root);
    while(!q.empty()){
        //* 1. ber kore nilam
        Node* p=q.front();
        q.pop();
        //* 2. jabotio ja kaj achhe
        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l==-1)myLeft=NULL;
        else myLeft=new Node(l);
        if(r==-1)myRight=NULL;
        else myRight=new Node(r);
        p->left=myLeft;
        p->right=myRight;
        //* 3. child push kora
        if(p->left)q.push(p->left); 
        if(p->right)q.push(p->right); 
    }
    return root;
}

queue<pair<Node*,int>>q1;
void level_order_taversal(Node* root){
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        //* 1. ber kore nilam

        pair<Node*,int>f=q.front();
        Node* node=f.first;
        int level=f.second;
    // cout<<level<<endl;
        q.pop();
        //* 2. ja kaj achhe
        q1.push(f);
        //* 3. tar child rakha
        if(node->left)q.push({node->left,level+1});
        if(node->right)q.push({node->right,level+1});
    }
}
int main(){
    Node* root=input_tree();
    int x;cin>>x;
    level_order_taversal(root);
    bool flag=true;
    // pair<Node*,int>f=q1.front();
    while(!q1.empty()){
        while(!q1.empty() && q1.front().second==x){
            // cout<<q1.front().second<<endl;
            cout<<q1.front().first->val<<" ";
            q1.pop();
            flag=false;
        }
        q1.pop();
    }
    if(flag)cout<<"Invalid";
    return 0;
}