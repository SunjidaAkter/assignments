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
int size(Node* head){
    Node* tmp=head;
    int cnt=0;
    while(tmp!=NULL){
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
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
    Node* head1=NULL;  
    Node* tail1=NULL;  
    while(true){
        int v;cin>>v;
        if(v==-1){
            break;
        }
        insert_at_tail(head1,tail1,v);
    }
    int s1=size(head1);
    Node* head2=NULL;  
    Node* tail2=NULL;  
    while(true){
        int v;cin>>v;
        if(v==-1){
            break;
        }
        insert_at_tail(head2,tail2,v);
    }

    int s2=size(head2);
    int flag=0;
    if(s1>s2){
        cout<<"NO";
    }else if(s1<s2){
        cout<<"NO";
    }else{
        Node* tmp1=head1;
        Node* tmp2=head2;
        for(int i=1;i<=s1;i++){
            if(tmp1->val!=tmp2->val){
                flag=1;
                break;
            }
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        if(flag==1){
            cout<<"NO";
        }else{
            cout<<"YES";
        }
    }
    return 0;
}