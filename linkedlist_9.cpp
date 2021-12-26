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
int main()
{
    head1->key=10;
    head2->key=20;
    struct node* newNode ;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=11;
    head1->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=12;
    head1->next->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=13;
    head1->next->next->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=14;
    head1->next->next->next->next=newNode;
    
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=19;
    head2->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=18;
    head2->next->next=newNode;
    
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=15;
    head1->next->next->next->next->next=newNode;
    //head2->next->next->next=newNode;
    
    intersection();

    return 0;
}
void intersection(){
    int flag=0;
    struct node*p=head1;
    struct node*q=head2;
    while(q!=NULL){
        p=head1;
        while(p!=NULL)
        if(p==q){
            cout<<"intersection found "<<p->key;
            flag=1;
            break;
        }
        else{
            p=p->next;
        }
        q=q->next;
    }
    if(flag==0)
    cout<<"intersection not found";
}
