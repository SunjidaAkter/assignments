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
    while(true){
        int v;cin>>v;
        if(v==-1){
            break;
        }
        insert_at_tail(head,tail,v);
    }
    for(Node* i=head;i->next!=NULL;i=i->next){
        for(Node* j=i->next;j!=NULL;j=j->next){
            if(i->val<j->val){
                swap(i->val,j->val);
            }
        }
    }
    if(size(head)%2!=0){
        Node* tmp=head;
        for(int i=1;i<=size(head)/2;i++){
            tmp=tmp->next;
        }
        cout<<tmp->val;
    }else{
        Node* tmp=head;
        for(int i=1;i<=(size(head)-1)/2;i++){
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }
    return 0;
}