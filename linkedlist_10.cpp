/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void intersection();
struct node{
    int key;
    struct node *next;
};

struct node* head1 = (struct node*)malloc(sizeof(struct node));
struct node* head2 = (struct node*)malloc(sizeof(struct node));
struct node* head3= (struct node*)malloc(sizeof(struct node));

int main()
{
    head1->key=2;
    head2->key=1;
    struct node* newNode ;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=4;
    head1->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=6;
    head1->next->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=8;
    head1->next->next->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=10;
    head1->next->next->next->next=newNode;
    
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=2;
    head2->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=3;
    head2->next->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=4;
    head2->next->next->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=5;
    head2->next->next->next->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=6;
    head2->next->next->next->next->next=newNode;
    
    intersection();

    return 0;
}
void intersection(){
    int flag=0,count=0;
    struct node*p=head1;
    struct node*q=head2;
    while(p!=NULL){
        q=head2;
        while(q!=NULL){
            if(p->key==q->key){
                cout<<p->key<<" ";
                flag=1;
                count++;
                /*if(count==1){
                    cout<<
                    head3->key=p->key;
                    head3->next=NULL;
                }
                else{
                    struct node*nw=head3;
                    struct node* newnode=(struct node*)malloc(sizeof(struct node));
                    newnode->key=p->key;
                    newnode->next=NULL;
                    while(nw->next!=NULL){
                        nw=nw->next;
                    }
                    nw->next=newnode;
                    
                }*/
                
            }
            q=q->next;
        }
        p=p->next;
    }
    if(flag==0)
    cout<<"intersection not found";
   /* else{
        struct node*nw=head3;
                
                while(nw!=NULL){
                    cout<<nw->key<<" ";
                    nw=nw->next;
                 }
        
    }*/
}
