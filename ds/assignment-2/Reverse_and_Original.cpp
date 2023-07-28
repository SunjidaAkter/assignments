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
void insert_at_tail(Node* &head,Node* &tail,int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void original_linked_list(Node* head){
    Node* tmp=head;
    if(tmp==NULL)return;
    cout<<tmp->val<<" ";
    original_linked_list(tmp->next);
}
void reversed_linked_list(Node* head){
    Node* tmp=head;
    if(tmp==NULL)return;
    reversed_linked_list(tmp->next);
    cout<<tmp->val<<" ";
}
int main(){
    Node* head=NULL;  
    Node* tail=NULL;  
    while(true){
        int v;cin>>v;
        if(v==-1){
            break;
        }
        insert_at_tail(head,tail,v);
    }
    reversed_linked_list(head);
    cout<<endl;
    original_linked_list(head);
    return 0;
}