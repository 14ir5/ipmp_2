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
/*struct Node {
    int data;
    struct Node* next;
};
    struct Node* head=NULL;
int main()
{
  
    int n,k,count=0,ch=0;
    
    do{
        cout<<"enter 1 to create and insert nodes"<<endl;
          cout<<"enter 2 to find kth node from end"<<endl;
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
                    cout<<"enter k to find kth node from last"<<endl;
                    cin>>k;
                    struct Node* q=head;
                    for(int i=1;i<count-k+1;i++){
                        q=q->next;
                        
                    }
                    cout<<q->data<<endl;
                            break; 
            
          }
       //cout<<"enter 1 to continue:"<<endl;
         // cin>>ch;
          
    }while(1);
    return 0;
}*/

int main(){
    list<int> lst;
    int k,data,n;
    do{
        cout<<"enter 1 to create and insert nodes"<<endl;
          cout<<"enter 2 to find kth node from end"<<endl;
          cin>>n;
          switch(n){
              case 1:{cout<<"enter data"<<endl;
                     cin>>data;
                     lst.push_back(data);
                     break;}
              case 2:
                        cout<<"enter k to find the kth node from end"<<endl;
                     cin>>k;
                    
                     list<int>::reverse_iterator it;
                     it= lst.rbegin();
                    for(int i=1;i<k;++i)
                    it++;
                    cout<<*it;
                    
            
          }
       //cout<<"enter 1 to continue:"<<endl;
         // cin>>ch;
          
    }while(1);
    return 0;
}
