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
void findset(int data);

struct node* head1=NULL,*head2=NULL,*head3=NULL,*p,*q,*r;
int main()
{
    int n1,n2,n3,sum;
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
    cout<<"enter no.of elements in 3rd  list "<<endl;
    cin>>n3;
    for(int i=0;i<n3;i++){
        cout<<"enter data"<<endl;
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        cin>>newnode->data;
        newnode->next=NULL;
        if(head3==NULL){
            head3=newnode;
            p=head3;
        }
        else{
            p->next=newnode;
            p=p->next;
        }
    }
    cout<<"enter sum to find"<<endl;
    cin>>sum;
    findset(sum);
    return 0;
}
void findset(int data){
    int flag=0,sum,sum2,sum3;
    p=head1;
    while(p!=NULL){
        sum=p->data;
        q=head2;
        while(q!=NULL){
            sum2=sum+q->data;
            r=head3;
            while(r!=NULL){
                sum3=sum2+r->data;
                
                if(sum3==data){
                     cout<<"elements in the 1st ,2nd, 3rd list respectively whose sum ="<<data
                     <<"is given:"<<p->data<<" "<<q->data<<" "<<r->data<<endl;
                     flag=1;
                }
               r=r->next;
            }
            q=q->next;
        }
        p=p->next;
    }
    if(flag==0){
        cout<<"no such datas exit whose sum is "<<data<<endl;
    }
}