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
        return ;
    }
    tail->next=newNode;
    tail=newNode;
}
void print_linked_list(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void reverse(Node* &head,Node* current){
        if(current->next==NULL){
            head=current;
            return;
        }
        reverse(head,current->next);
        current->next->next=current;
        current->next=NULL;
    }
int main(){
    int val;
    Node* head=NULL;
    Node* tail=NULL;
    Node* newHead=NULL;
    Node* newTail=NULL;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    // print_linked_list(head);
    Node* tmp=head;
    while(tmp!=NULL){
        insert_at_tail(newHead,newTail,tmp->val);
        tmp=tmp->next;
    }
    bool flag=true;
    reverse(newHead,newHead);
    tmp=head;
    Node* tmp1=newHead;
    while(tmp!=NULL){
        if(tmp->val!=tmp1->val){
            flag=false;
        }
        tmp=tmp->next;
        tmp1=tmp1->next;
    }
    if(flag==true){
        cout<<"YES";
    }else if(flag==false){
        cout<<"NO";
    }
    return 0;
}