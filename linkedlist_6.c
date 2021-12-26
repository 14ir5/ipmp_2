/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    int visited;
    struct Node* next;
};
    struct Node* head,*p=NULL;
int main()
{
  
    int n,k,ch;
    struct Node* q;
    struct Node* var;
     printf("enter number of nodes ");
    scanf("%d",&n);

        printf("enter 1 linear linked list\n");
         printf("enter 2 circular linked list\n");
         scanf("%d",&ch);
         
    switch(ch){
              case 1:for(int i=0;i<n;i++){
                     printf("enter number data:");
                     scanf("%d",&k);
                     struct Node *newNode = (struct Node*)malloc(sizeof(struct Node)); 
                     newNode->data = k;  
                     newNode->next = NULL;
                
                      if(head == NULL) {  
                          head = newNode;  
                          p= newNode;
                          p->visited=0;
                          
                      }  
                      else { 
                            p->next = newNode; 
                             p=newNode; 
                              p->visited=0;
                              } 
                     }
                              break;
            case 2:for(int i=0;i<n;i++){
                    printf("enter number data:");
                     scanf("%d",&k);
                     struct Node *newNode = (struct Node*)malloc(sizeof(struct Node)); 
                     newNode->data = k;  
                     newNode->next = NULL;
                
                      if(head == NULL) {  
                          head = newNode;  
                          p= newNode;
                           p->visited=0;
                      }  
                      else { 
                            p->next = newNode; 
                             p=newNode; 
                             p->next=head;
                             p->visited=0;
                              }   
                    }          
                              break;
    }
  
    while(head!=NULL){
        if(head->visited==1)
        {
            printf("loop is present");
            return 0;
        }
        head->visited=1;
        head=head->next;
    }
     printf("no loop ");
return 0;    
}
