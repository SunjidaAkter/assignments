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
    int max=INT_MIN;
    int min=INT_MAX;
    for(Node* i=head;i!=NULL;i=i->next){
        if(max<i->val){
            max=i->val;
        }
        if(min>i->val){
            min=i->val;
        }
    }
    cout<<max<<" "<<min;
    return 0;
}