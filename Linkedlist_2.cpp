/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

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
          cout<<"enter 2 to reverse"<<endl;
          cout<<"enetr 3 to print "<<endl;
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
                    {struct Node *prev=NULL,*fwd;
                    struct Node* cur=head;
                    while(cur!=NULL){
                        fwd=cur->next;
                        cur->next=prev;
                        prev=cur;
                        cur=fwd;
                     }
                     head=prev;
                     cout<<head->data<<endl;
                     break;}
              case 3: 
                     if(head == NULL)   
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
}*/
#include <iostream>
#include <list>


int main(){
    list<int> lst;
    int k,data,n;
    do{
        cout<<"enter 1 to create and insert nodes"<<endl;
          cout<<"enter 2 to reverse list"<<endl;
          cin>>n;
          switch(n){
              case 1:{cout<<"enter data"<<endl;
                     cin>>data;
                     lst.push_back(data);
                     break;}
              case 2:
                      lst.reverse();
            case 3:  for (auto it=lst.begin(); it!=lst.end(); ++it)
                    cout <<" "<< *it;
                    cout<<endl;
          }
       //cout<<"enter 1 to continue:"<<endl;
         // cin>>ch;
         
    }while(1);
    return 0;
}