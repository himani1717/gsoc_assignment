class Node{
    public:
    int data;
    Node *next;
    
};
 int main(){
     Node *a= new Node;
     Node *b= new Node;
     Node *c= new Node;
     a->data=1;
     a->next=b;
     b->data=2;
     b->next=c;
     c->data=3;
     c->next=NULL;
     cout<<a->next<<"\n";
 }
