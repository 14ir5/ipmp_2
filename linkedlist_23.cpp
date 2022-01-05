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

 struct node* reverse(node* head);

int n1,n2;
struct node* head1=NULL,*head2=NULL,*result = NULL,*x;
void multiply(){
    head1=reverse(head1);
    head2=reverse(head2);
    struct node *p,*q=head2,*res1=result,*res2;
    while(q!=NULL){
        p=head1;
        res2=res1;
        int carry=0;
        while(p!=NULL){
            int mul=q->data*p->data+carry;
             res2->data += mul % 10;
             carry=mul/10+res2->data/10;
             res2->data = res2->data % 10;
             p= p->next;
            res2 = res2->next;
        }
        if (carry > 0) {
            res2->data += carry;
        }
         q= q->next;
            res1 = res1->next;
    }
    result=reverse(result);
    
 
    
    while (result->data == 0) {
        struct node* temp = result;
        result = result->next;
        free(temp);
    }
}


 struct node* reverse(node* head)
{
    if (head == NULL || head->next == NULL)
        return head;
 
    node* rest = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
 
    return rest;
} 
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
            x=head1;
        }
        else{
            x->next=newnode;
            x=x->next;
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
            x=head2;
        }
        else{
            x->next=newnode;
            x=x->next;
        }
    }
       for(int i=0;i<n1+n2+1;i++){
      
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=0;
        newnode->next=NULL;
        if(result==NULL){
            result=newnode;
            x=result;
        }
        else{
            x->next=newnode;
            x=x->next;
        }
    }
    multiply();
    x=result;
    while(x!=NULL){
        cout<<x->data<<" ";
        x=x->next;
    }
    return 0;
}

