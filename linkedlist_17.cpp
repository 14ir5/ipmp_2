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

void sort();
struct node* head1 = (struct node*)malloc(sizeof(struct node));


int main()
{
    head1->key=2;
   
    struct node* newNode ;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=1;
    head1->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=0;
    head1->next->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=1;
    head1->next->next->next=newNode;
    newNode= (struct node*)malloc(sizeof(struct node));
    newNode->key=0;
    head1->next->next->next->next=newNode;
    
  
    sort();
    struct node*m=head1;
   
                while(m!=NULL){
                    cout<<m->key<<" ";
                    m=m->next;
                }
              
    return 0;
}

void sort(){
    int a[]={0,0,0};
   struct node*p=head1;
   while(p!=NULL){
       a[p->key]++;
       p=p->next;
   }
     int i = 0;
    p= head1;

    while (p != NULL)
    {
        if (a[i] == 0)
            ++i;
        else
        {
            p->key = i;
            --a[i];
            p = p->next;
        }
    }
  
   
       
}

