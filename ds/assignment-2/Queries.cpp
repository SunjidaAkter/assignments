#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(int val){
            this->val=val;
            this->next=NULL;
        }
};
// void print_linked_list(Node* head){
//     Node* tmp=head;
//     while(tmp!=NULL){
//         cout<<tmp->val<<" ";
//         tmp=tmp->next;
//     }
//     cout<<endl;
// }
void insert_at_head(Node* &head,Node* &tail,int v){
    Node* newNode=new Node(v);
    if(head ==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
}
void insert_at_tail(Node* &head,Node* &tail, int v){
    Node* newNode=new Node(v);
    if(head ==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
int main(){
    int q;cin>>q;
    Node* head=NULL;
    Node* tail=NULL;  
    while(q--){
        int x,v;cin>>x>>v;
        if(x==0){
            insert_at_head(head,tail,v);
        }else if(x==1){
            insert_at_tail(head,tail,v);
        }
        cout<<head->val<<" "<<tail->val<<endl;
    // print_linked_list(head);

    }
    return 0;
}