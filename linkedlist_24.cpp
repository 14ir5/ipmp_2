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

 struct node* swappair(struct node*x);

int n1;
struct node* head1=NULL,*q;
int main()
{
    cout<<"enter no.of elements in 1st  list "<<endl;
    cin>>n1;
 cout<<"enter data seperated by space"<<endl;
    for(int i=0;i<n1;i++){
       
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        cin>>newnode->data;
        newnode->next=NULL;
        if(head1==NULL){
            head1=newnode;
            q=head1;
        }
        else{
            q->next=newnode;
            q=q->next;
        }
    }
    swappair(head1);
    struct node*p=head1;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    return 0;
}
struct node* swappair(struct node *x){
    
    struct node*temp;
    if(x==NULL||x->next==NULL)
    return x;
    if(x!=NULL&&x->next!=NULL){
        if(x==head1){
            temp=x->next;
            x->next=temp->next;
            temp->next=x;
            head1=temp;
        }    
        else{
            temp=x->next;
            x->next=temp->next;
            temp->next=x;
        }
       
    }
     x->next=swappair(x->next);
     return temp;
}
