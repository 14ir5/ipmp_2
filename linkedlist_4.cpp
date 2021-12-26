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
    char data;
    struct Node* next;
};
    struct Node* head=NULL;
int main()
{
  
    int n,k,count=0,c=-1,flag=0;
    char a[100];
    
    do{
        cout<<"enter 1 to create and insert nodes"<<endl;
          cout<<"enter 2 to find kth node from end"<<endl;
          cin>>n;
          switch(n){
              case 1:{struct Node *newNode = (struct Node*)malloc(sizeof(struct Node)); 
              cout<<"enter char data:"<<endl;
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
                    
                    struct Node* q=head;
                     c=-1;
                     flag=0;
                     while(q!=NULL){
                         a[++c]=q->data;
                         q=q->next;
                     }
                     q=head;
                    for(int i=1,j=c;i<=count/2,j>=0;i++,j--){
                        if(q->data==a[j])
                        q=q->next;
                        else 
                        flag=1;
                    }
                   if(flag==0)
                   cout<<"palandrome"<<endl;
                   else
                   cout<<"not palandrome"<<endl;
                   
                   break; 
            
          }
       //cout<<"enter 1 to continue:"<<endl;
         // cin>>ch;
          
    }while(1);
    return 0;
}
