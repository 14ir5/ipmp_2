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

void dlt();
int n1;
struct node* head1=NULL,*q;
int main()
{
    cout<<"enter no.of elements in 1st  list "<<endl;
    cin>>n1;
    for(int i=0;i<n1;i++){
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
    dlt();
    struct node*p=head1;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    return 0;
}
void dlt(){
    int m,n;
    cout<<"enter m :"<<endl;
    cin>>m;
    cout<<"enter n :";
    cin>>n;
    if(m+n<=n1){
        struct node*p=head1;
        for(int i=1;i<m;i++)
            p=p->next;
        struct node*q=p->next;
        for(int i=1;i<n;i++)
        q=q->next;
        p->next=q->next;
    
    }        
}
    
    