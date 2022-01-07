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
void merge();

struct node* head1=NULL,*head2=NULL,*head3=NULL;
int main()
{
    int n1,n2;
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
    cout<<"enter no.of elements in 2nd  list "<<endl;
    cin>>n2;
    for(int i=0;i<n2;i++){
        cout<<"enter data"<<endl;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        cin>>newnode->data;
        newnode->next=NULL;
        if(head2==NULL){
            head2=newnode;
            q=head2;
        }
        else{
            q->next=newnode;
            q=q->next;
        }
    }
    merge();
     struct node*x=head1;
    while(x!=NULL){
        cout<<x->data<<" ";
        x=x->next;
    }
    return 0;
}
void merge(){
    struct node*p=head1;
    struct node*q=head2;
    while(p!=NULL&&q!=NULL){
            struct node *temp=(struct node*)malloc(sizeof(struct node));
            temp->data=q->data;
            temp->next=p->next;
            p->next=temp;
            q=q->next;
            p=p->next->next;
    }
    
    
}