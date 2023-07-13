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

bool perfectTree(Node* root){
    if(root->left==NULL&&root->right==NULL)return true;
    if(root->left==NULL||root->right==NULL)return false;
    bool l=perfectTree(root->left);
    bool r=perfectTree(root->right);
    // cout<<l<<r;
    if(l==false||r==false)return false;
    else return true;
}
int main(){
    Node* root=input_tree();
    if(perfectTree(root))cout<<"YES";
    else cout<<"NO";
    return 0;
}