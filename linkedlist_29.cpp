/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
struct node{
    int data;
    struct node *next;
};

void mergesort(struct node**headref);
void divide(struct node*head,struct node**aref,struct node**bref);
struct node* mergesorted(struct node* a,struct node *b);
int n1;
struct node* head1=NULL,*head2=NULL,*head3=NULL;
int main()
{
 
    struct node*p;
    struct node*q;
    cout<<"enter no.of elements in 1st  list "<<endl;
    cin>>n1;
    for(int i=0;i<n1;i++){
        cout<<"enter data"<<endl;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        cin>>newnode->data;
        newnode->next=NULL;
        if(head1==NULL){
            head1=newnode;
            p=head1;
        }
        else{
            p->next=newnode;
            p=p->next;
        }
    }
   
    mergesort(&head1);
     struct node*x=head1;
    while(x!=NULL){
        cout<<x->data<<" ";
        x=x->next;
    }
    return 0;
}
void mergesort(struct node**headref){
    struct node*head=*headref;
    if(head==NULL||head->next==NULL)
    return;
    
    struct node*a,*b;
    divide(head,&a,&b);
    mergesort(&a);
    mergesort(&b);
    *headref=mergesorted(a,b);
    
}
void divide(struct node*head,struct node**aref,struct node**bref){
    
    node* fast;
    node* slow;
    slow = head;
    fast = head->next;
    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }
    *aref=head;
    *bref=slow->next;
    
    slow->next=NULL;
}
struct node* mergesorted(struct node* a,struct node *b){
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    struct node*result=NULL;
    if(a->data<b->data)
    {
        result=a;
        result->next=mergesorted(a->next,b);
    }
    else{
        result=b;
        result->next=mergesorted(a,b->next);
    }
   
    return result; 
}