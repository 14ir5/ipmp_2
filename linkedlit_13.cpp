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
    int k;
int main()
{
  
    int n,k,count=0,c=-1,flag=0;
    char a[100];
    
    do{
        cout<<"enter 1 to create and insert nodes"<<endl;
          cout<<"enter 2 to delete alternate nodes linked list"<<endl;
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
                       rytRotate();
                       
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
                        void rytRotate(){
                            struct Node *cur=head;
                            int c=1;
                            while(c<k&&cur->next!=NULL){
                                cur=cur->next;
                                c++;
                            }
                            if(cur->next==NULL)
                            return;
                             struct Node *kthnode=cur;
                             while(cur->next!=NULL){
                                 cur=cur->next;
                             }
                             cur->next=head;
                             head=kthnode->next;
                             kthnode->next=NULL;
                             
                         
                        
                        }
                        
                    