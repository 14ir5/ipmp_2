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

void addcarry(struct node *head,struct node*cur,int *carry);
void findsum();
struct node* addsamesize(struct node*head,struct node*head3,int *c);
int n1,n2,n3;
struct node* head1=NULL,*head2=NULL,*head3=NULL,*result = NULL,*p=NULL;
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
            p=head2;
        }
        else{
            p->next=newnode;
            p=p->next;
        }
    }
    
    findsum();
    p=result;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    return 0;
}
void findsum(){
    if (head1 == NULL) {
        result = head2;
        return;
    }
 
    else if (head2 == NULL) {
        result = head1;
        return;
    }
    int carry = 0;
    if(n1==n2)
    result=addsamesize(head1,head2,&carry);
    else{
        if(n1<n2)//head1 shud be of larger size
        {
            struct node*temp=head1;
            head1=head2;
            head2=temp;
        }
        int diff=n1-n2;
        struct node *cur;
        for(cur=head1;diff>0;diff--)
        cur=cur->next;
        result=addsamesize(cur,head2,&carry);
        
        addcarry(head1,cur,&carry);
        
    }
    
}
struct node* addsamesize(struct node*head,struct node*head3,int *c){
    int sum;
    struct node* res=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    return NULL;
    res->next=addsamesize(head->next, head3->next, c);
    sum=head->data+head3->data+*c;
    *c=sum/10;
    res->data=sum%10;
    return res;
}

void addcarry(struct node *head,struct node*cur,int *carry){
    int sum;

    if (head != cur) {
        addcarry(head->next, cur, carry);
 
        sum = head->data + *carry;
        *carry = sum / 10;
        sum %= 10;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->next=result;
        newnode->data=sum;
        result=newnode;
        
    }
}