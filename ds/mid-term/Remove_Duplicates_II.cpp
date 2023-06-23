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
void insert_at_tail(Node* &head,int v){
    Node* newNode=new Node(v);
    if(head==NULL){
        head=newNode;
        return ;
    }
    Node* tmp=head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print_linked_list(Node* head){
    Node* tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
} 
int main(){
    int val;
    Node* head=NULL;
    list<int>myList;
    while(true){
        cin>>val;
        if(val==-1){
            break;
        }
        myList.push_back(val);
    }
    myList.sort();
    myList.unique();
    for(int val:myList){
        cout<<val<< " ";
    }
    return 0;
}