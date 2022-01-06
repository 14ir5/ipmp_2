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

 void swappairk();
int n;
struct node* head1=NULL,*q;
int main()
{
    cout<<"enter no.of elements in 1st  list "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter data"<<endl;
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
    
    swappairk();
    struct node*p=head1;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    return 0;
}
void swappairk(){
    int k;
      cout<<"enter value of k to swap"<<endl;
    cin>>k;
     if (2 * k - 1 == n)
        return;
     if (2 * k - 1 == n)
        return;
    struct node *x=head1;
    struct node *x_prev=NULL;
    for(int i=1;i<k;i++){
        x_prev=x;
        x=x->next;
    }
     struct node *y=head1;
    struct node *y_prev=NULL; 
    for(int i=1;i<n-k+1;i++){
        y_prev=y;
        y=y->next;
    }
    if (x_prev)
    x_prev->next=y;
    if (y_prev)
    y_prev->next=x;
    struct node *temp=x->next;
    x->next=y->next;
    y->next=temp;
    if (k == 1)
        head1 = y;
    if (k == n)
        head1 = x;
     
}