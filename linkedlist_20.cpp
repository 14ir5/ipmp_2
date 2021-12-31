/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>
#include <list>
#include <iterator>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};
    struct Node* head=NULL,*head2=NULL,*head1=NULL;
    void splitalternate();
     int k;
int main()
{
     int n,count=0;
    
    do{
        cout<<"enter 1 to create and insert nodes"<<endl;
          cout<<"enter 2 to segregate even and odd"<<endl;
          cout<<"enter 3 to display nodes"<<endl;
          cin>>n;
          switch(n){
              case 1:{struct Node *newNode = (struct Node*)malloc(sizeof(struct Node)); 
              cout<<"enter number data:"<<endl;
                     cin>>newNode->data;
                     newNode->next = NULL;
                
                      if(head == NULL) {  
                          head = newNode;  
                            
                      }  
                      else { 
                            struct Node* p=head;
                            while(p->next!=NULL){
                                p=p->next;
                            }
                            p->next=newNode;
                            
                              } 
                              count++;
                         
                           break;  
              }
              case 2: 
                   
                   {
                      
                      splitalternate();
                     break;} 
            case 3: if(head == NULL)   
                     cout<<"List is empty"<<endl ;
                     struct Node*q=head;
                      while(q!= NULL) {  
                          cout<< q->data<<" "; 
                             q=q->next;} 
                             cout<<endl;
                    q=head1;
                      while(q!= NULL) {  
                          cout<< q->data<<" "; 
                             q=q->next;} 
                             cout<<endl;
                             q=head2;
                      while(q!= NULL) {  
                          cout<< q->data<<" "; 
                             q=q->next;} 
                             cout<<endl;
                            break; 
            
          }
       //cout<<"enter 1 to continue:"<<endl;
         // cin>>ch;
          
    }while(1);
    return 0;
}
                      void splitalternate(){
                         
                     
                         head1=NULL;head2=NULL;
                         struct Node*q=head;
                         int c=1;
                        while(q!= NULL){
                           if(c%2!=0){
                               if(head1==NULL){
                                    struct Node *temp= (struct Node*)malloc(sizeof(struct Node)); 
                                    temp->data=q->data;
                                    temp->next=NULL;
                                    head1=temp;
                               }
                               else{
                                   struct Node *temp= (struct Node*)malloc(sizeof(struct Node)); 
                                    temp->data=q->data;
                                    temp->next=NULL;
                                    struct Node *p=head1;
                                    while(p->next!=NULL){
                                        p=p->next;
                                    }
                                    p->next=temp;
                               }
                           }
                           else{
                               if(head2==NULL){
                                    struct Node *temp= (struct Node*)malloc(sizeof(struct Node)); 
                                    temp->data=q->data;
                                    temp->next=NULL;
                                    head2=temp;
                               }
                               else{
                                   struct Node *temp= (struct Node*)malloc(sizeof(struct Node)); 
                                    temp->data=q->data;
                                    temp->next=NULL;
                                    struct Node *p=head2;
                                    while(p->next!=NULL){
                                        p=p->next;
                                    }
                                    p->next=temp;
                               }
                               
                           }
                           q=q->next;
                           c++;
                        }

                      }