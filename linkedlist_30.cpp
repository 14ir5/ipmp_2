/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
struct node{
    int data;
    struct node*down;
    struct node *next;
};
void createlist(struct node **head);
int n1;
struct node* head1=NULL,*head2=NULL,*head3=NULL;
struct node* mergesorted(struct node* a,struct node *b);
int main()
{
 
    struct node*p;
    struct node*q;
    cout<<"enter no.of elements in 1st list sorted "<<endl;
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
    
    p=head1;
    while(p!=NULL){
        createlist(&p);
        p=p->next;
    }   
   p=head1;
    while(p->next!=NULL){
        struct node* temp=p->next->next;
        p=mergesorted(p,p->next);
        p->next=temp;
    }
    struct node*x=head1;
    while(x!=NULL){
        cout<<x->data<<" ";
        x=x->down;
    }
    return 0;
}
void createlist(struct node **head){
    int n;
    struct node*p;
    p=*head;
    cout<<"enter no.of elements in list sorted "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter data"<<endl;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        cin>>newnode->data;
        newnode->down=NULL;
        p->down=newnode;
        p=p->down;
        
    }
    
    
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
        result->down=mergesorted(a->down,b);
    }
    else{
        result=b;
        result->down=mergesorted(a,b->down);
    }
   
    return result; 
}