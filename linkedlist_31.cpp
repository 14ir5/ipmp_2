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
    struct node *random;
};
void createcopy();
struct node* head1 = (struct node*)malloc(sizeof(struct node));
struct node* head2 = NULL;
int main()
{
    head1->key=10;
   
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
    head1->random = head1->next->next;
 
    // 2's random points to 1
    head1->next->random = head1;
 
    // 3's and 4's random points to 5
    head1->next->next->random =
                    head1->next->next->next->next;
    head1->next->next->next->random =
                    head1->next->next->next->next;
 
    // 5's random points to 2
    head1->next->next->next->next->random =
                                     head1->next;
    
    
    createcopy();
     struct node*x=head2;
    while(x!=NULL){
        cout<<x->key<<" ";
        x=x->next;
    }
    cout<<endl;
    x=head2;
     while(x!=NULL){
        cout<<x->random->key<<" ";
        x=x->next;
    }
    return 0;
} 
void createcopy(){
    struct node *p=head1;
    struct node*q;
    while(p!=NULL){
        struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->key=p->key;
        newnode->random=p;
        newnode->next=NULL;
        if(head2==NULL){
            head2= newnode;
            q=head2;
        }
        else{
            q->next=newnode;
            q=q->next;
        }
        struct node *temp=p;
        p=p->next;
        temp->next=q;
        
    
    }
    q=head2;
    while(q!=NULL){
        q->random=q->random->random->next;
        q=q->next;
    }
}   