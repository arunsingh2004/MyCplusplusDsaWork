#include<stdio.h>
#include<stdlib.h>

struct Queue{
      int data;
 struct Queue*next;

};
struct Queue *front =0;
struct Queue *rear =0;
struct Queue *temp= 0;

void enqueue(int x){
  struct Queue *newnode = (struct Queue*)malloc(sizeof(struct Queue));
   newnode->data=x;
   newnode->next=0;

   if(front==NULL && rear==NULL){
       front = rear = newnode;
       rear->next = front;
   }
  else{
       rear->next=newnode;
        rear = newnode;
        rear->next=front;
    }
}

 void dequeue(){
      temp= front;
      if(front==NULL && rear==NULL){
            printf("Overflow");
      }
       else if(front==rear){
         front=rear=NULL;
         free(temp);
       }
        else{
            printf("The deleted node data is%d\n",front->data);
           front=front->next;
           rear->next= front;
           free(temp);
        }
 }

  void peek(){
     if(front==NULL && rear==NULL){
            printf("Overflow");
      }
      
      else{
       printf("The peek element is %d",front->data);

      }
  }
   void display(){
      temp =front;
      if(front==NULL && rear==NULL){
            printf("Overflow");
      }
      else{
            while(temp->next!=front){
           printf("%d\n",temp->data);
                 temp= temp->next;

            }
            printf("%d\n",temp->data);
      }
   }
 int main(){

      enqueue(1);
      enqueue(2);
      enqueue(3);
      enqueue(4);
      dequeue();
      dequeue();
      peek();
      display();
      return 0;
 }
