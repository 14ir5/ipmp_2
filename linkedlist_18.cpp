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
    struct Node* head=NULL;
    void rytRotatebyOne();
    void rytRotate();
   
    void oddneven();
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
                      
                       oddneven();
                       
                     break;} 
            case 3: if(head == NULL)   
                     cout<<"List is empty"<<endl ;
                     struct Node*q=head;
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
                      void oddneven(){
                          int c=1;
                          struct Node*q=head;
                          struct Node*cnt=head;
                          int count=0;
                            while(cnt!= NULL) {  
                            count++;
                             cnt=cnt->next;}
                         /*if(q->data%2!=0){
                               struct Node*p=head;
                              while(p->next!= NULL) {  
                                p=p->next;} 
                                p->next=head;
                                head=head->next;
                                p->next->next=NULL;
                          }*/
                      while(q!= NULL&& c<count) {
                          c++;
                          
                          if(q->data%2!=0&&q!=head){
                              
                              struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
                              temp->data=q->data;
                              temp->next=NULL;
                              struct Node*p=head;
                              while(p->next!= q){  
                                p=p->next;
                              } 
                              p->next=q->next;
                              struct Node*end=head;
                              while(end->next!= NULL){  
                                end=end->next;
                              } 
                                end->next=temp;
                             
                          } 
                          else{
                              if(q!=head){
                              struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
                              temp->data=q->data;
                              struct Node*p=head;
                              while(p->next!= q){  
                                p=p->next;
                              } 
                              p->next=q->next;
                              temp->next=head;
                              head=temp;
                              }
                          }
                          q=q->next;
                        } 
                      }