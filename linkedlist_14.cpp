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
   
    void reverse(struct Node **start,struct Node**end);
    void kreverse();
     int k;
int main()
{
     int n,count=0;
    
    do{
        cout<<"enter 1 to create and insert nodes"<<endl;
          cout<<"enter 2 to reverse groups of k nodes"<<endl;
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
                       cout<<"enter k to rotatte linked list by k"<<endl;
                       cin>>k;
                       kreverse();
                       
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
                        void kreverse(){
                            struct Node *end=head;
                            struct Node *start=head;
                             int c=1;
                             int m=1;
                              struct Node*q=head;
                              int count=0;
                             while(q!= NULL) {  
                            count++;
                             q=q->next;} 
                             int p=(count/k);
                             while(m<=p+1){
                                 
                                 m++;
                                 c=0;
                                 while(c<k&&end!=NULL){
                                    end=end->next;
                                    c++;
                                 }
                                 reverse(&start,&end);
                                 start=end;
                             }
                            
                         
                        
                        }
                        void reverse(struct Node **start,struct Node**end){
                        
                            struct Node *prev=*end;;
                            struct Node*cur,*fwd;
                            cur=*start;
                            while(cur!=*end){
                                fwd=cur->next;
                                cur->next=prev;
                                prev=cur;
                                cur=fwd;
                            }
                            if(*start==head){
                                 *start=prev;
                                head=*start;
                            }
                            else{
                                 struct Node*q=head;
                               while(q->next!=*start){  
                                    q=q->next;
                               }  
                                 *start=prev;
                                q->next=*start;
                            }
                             
                        }
                        
                    