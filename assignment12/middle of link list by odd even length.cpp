#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    
};

void printLinkedList(Node* head,int c) {
    int c1=0;
    while(head != NULL){
        c1+=1;
        if(c1==c){
        cout<<head->data<<"\n";}
        head=head->next;
    
    }}
   

int middle_linklist(Node *head){    

  int c=0;
    
while(head!=NULL){
        c+=1;
    head=head->next;
}
   //cout<<c<<endl;
   int mid=0; 
 if(c%2==0){
      mid=c/2;
     cout<<mid<<endl;
 }
else {
     mid=(c/2)+1;
    cout<<mid<<endl; }
    return mid;
}

 int main(){
     
     Node *a= new Node;
     Node *b= new Node;
     Node *c= new Node;
     a->data=7;
     a->next=b;
     b->data=13;
     b->next=c;
     c->data=51;
     c->next=NULL;
     cout<<a->next<<"\n";
     printLinkedList(a,middle_linklist(a));
     
 }
