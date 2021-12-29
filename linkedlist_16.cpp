/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void intersection();
void smallest();
void _union();
struct node{
    int key;
    struct node *next;
};
void mergesorted();
struct node* head1 = (struct node*)malloc(sizeof(struct node));
struct node* head2 = (struct node*)malloc(sizeof(struct node));
struct node* head3= NULL;

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
    mergesorted();
    struct node*m=head3;
   
                while(m!=NULL){
                    cout<<m->key<<" ";
                    m=m->next;
                }
              
    return 0;
}

void mergesorted(){
    struct node *p=head1;
    struct node *q=head2;
    int i=0,j=0;
    while(p!=NULL&&q!=NULL){
        if(p->key<q->key){
             struct node* newnode=(struct node*)malloc(sizeof(struct node));
                newnode->key=p->key;
                newnode->next=NULL;
            if(head3==NULL){
                head3=newnode;
            }
            else{
                struct node* newnode=(struct node*)malloc(sizeof(struct node));
                newnode->key=p->key;
                newnode->next=NULL;
                struct node*m=head3;
                while(m->next!=NULL){
                    m=m->next;
                }
                m->next=newnode;
                
            }
            p=p->next;
        }
        else{
             struct node* newnode=(struct node*)malloc(sizeof(struct node));
                newnode->key=q->key;
                newnode->next=NULL;
            if(head3==NULL){
             
                head3=newnode;
                
            }
            else{
               
                struct node*m=head3;
                while(m->next!=NULL){
                    m=m->next;
                }
                m->next=newnode;
                
            }
            q=q->next;
        }
    }
    while(p!=NULL){
         struct node* newnode=(struct node*)malloc(sizeof(struct node));
                newnode->key=p->key;
                newnode->next=NULL;
                struct node*m=head3;
                while(m->next!=NULL){
                    m=m->next;
                }
                m->next=newnode;
                p=p->next;
    }
while(q!=NULL){
         struct node* newnode=(struct node*)malloc(sizeof(struct node));
                newnode->key=q->key;
                newnode->next=NULL;
                struct node*m=head3;
                while(m->next!=NULL){
                    m=m->next;
                }
                m->next=newnode;
                q=q->next;
    }
    
}

