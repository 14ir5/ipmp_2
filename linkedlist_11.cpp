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
    _union();
    return 0;
}
int c1=0,c2=0;
void smallest(){
    struct node*p=head1;
    struct node*q=head2;
    while(p!=NULL){
        c1++;
        p=p->next;
    }
    while(q!=NULL){
        c2++;
        q=q->next;
    }
}
void _union(){
    cout<<"union list:"<<endl;
    smallest();
    struct node*p=head1;
    struct node*q=head2;
    int flag=0;
    if(c1>c2){
        while(p!=NULL){
           cout<<p->key<<" ";
           p=p->next;
        }
        while(q!=NULL){
             p=head1;
             flag=0;
            while(p!=NULL){
                if(p->key==q->key){
                    flag=1;
                }
                p=p->next;
            }
            if(flag==0)
            cout<<p->key<<" ";
            q=q->next;
        }
    }
    else{
        while(q!=NULL){
            cout<<q->key<<" ";
            q=q->next;
        }
        while(p!=NULL){
             q=head2;
             flag=0;
            while(q!=NULL){
                if(p->key==q->key){
                    flag=1;
                }
                q=q->next;
            }
            if(flag==0)
            cout<<p->key<<" ";
            p=p->next;
        }
    }

}
void intersection(){
    int flag=0,count=0;
    struct node*p=head1;
    struct node*q=head2;
    cout<<"intersection list:"<<endl;
    while(p!=NULL){
        q=head2;
        while(q!=NULL){
            if(p->key==q->key){
                cout<<p->key<<" ";
                flag=1;
                count++;
                
                
            }
            q=q->next;
        }
        p=p->next;
    }
    if(flag==0)
    cout<<"intersection not found";
    cout<<endl;
 
}
