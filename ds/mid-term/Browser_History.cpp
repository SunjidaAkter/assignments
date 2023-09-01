#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        string val;
        Node* prev;
        Node* next;
        Node(string val){
            this->val=val;
            this->prev=NULL;
            this->next=NULL;
        }
};
void insert_at_tail(Node* &head,Node* &tail,string v){
    Node* newNode=new Node(v);
    if(tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
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
 
int main(){
    string val;
    Node* head=NULL;
    Node* tail=NULL;
    list<string>myList;
    while(true){
        cin>>val;
        if(val=="end"){
            break;
        }
        insert_at_tail(head,tail,val);
        myList.push_back(val);
    }
    int q;cin>>q;
    Node* tmp=head;
    string command,brow;
    cin>>command>>brow;
    auto it=find(myList.begin(),myList.end(),brow);
    cout << *it << endl;
    while (tmp->val != brow) {
        tmp = tmp->next;
    }
    for(int i=0;i<q-1;i++){
        cin>>command;
        if(command=="prev"){
            if(tmp->prev!=NULL){
                cout<<tmp->prev->val<<endl;
                tmp=tmp->prev;
            }else{
                cout<<"Not Available"<<endl;
            }
        }else if(command=="next"){
            if(tmp->next!=NULL){
                cout<<tmp->next->val<<endl;
                tmp=tmp->next;
            }else{
                cout<<"Not Available"<<endl;
            }
        }else if(command=="visit"){
            cin>>brow;
            auto it=find(myList.begin(),myList.end(),brow);
            if (*it == brow) {
                cout << *it << endl;
                tmp = head;
                while (tmp->val != brow) {
                    tmp = tmp->next;
                }
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
    // cout<<*it;
    return 0;
}