#include<stdio.h>
#include<stdlib.h>
struct Node{
 int data;
 struct Node *next;
};
// struct Node*head=NULL;
   void push(struct Node**head_ref, int new_data){
    struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
     new_node->data=new_data;
     new_node->next=(*head_ref);
     (*head_ref)=new_node;
   }
   void insertAfter(struct Node*previous_node,int new_data){
  if (previous_node==NULL)
  {
  printf("The previous node cannot be null");
  return;
  }
  struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
     new_node->data=new_data;
     new_node->next=previous_node->next;
     previous_node->next=new_node;
   }
   void append(struct Node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 
    struct Node *last = *head_ref;  /* used in step 5*/
 
    /* 2. put in the data  */
    new_node->data  = new_data;
 
    /* 3. This new node is going to be the last node, so make next of
          it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return; 
    }
 
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
 
    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}
   void printList(struct Node* node){
  while(node!=NULL){
   printf("%d",node->data);
   node=node->next;
  }
   }
int main(){
      
struct Node* head=NULL;

append(&head,4);
push(&head,6);
push(&head,4);
// insertAfter(&head,7);
printList(head);
       return 0;
}