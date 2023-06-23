#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode=new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void print_list(Node* head){
    cout<<"L -> ";
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail){
    cout<<"R -> ";
    Node* tmp=tail;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
void insert_at_position(Node* head,int pos, int v){
    Node* newNode=new Node(v);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}
void insert_at_head(Node* &head,Node* &tail,int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
int size(Node* head){
    Node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    int q;cin>>q;
    while(q--){
        int x,flag=0,v;cin>>x>>v;
        if(x==0){
        insert_at_head(head,tail,v);
        }else if(x==size(head)){
            insert_at_tail(head,tail,v);
        }else if(x>size(head)){
            flag=1;
        }else{
            insert_at_position(head,x,v); 
        }
        if(flag==0){
            print_list(head);
            print_reverse(tail);
        }else{
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}