#include <stdio.h>
#include <stdlib.h>
#define N 100 
int queue[N];
int front, rear = -1;
int i;
void enqueue(int x)
{
     
       if (front == -1 || rear == -1)
      {
            front = rear = 0;
            queue[rear] = x;
      }
      else if((rear+1)%N==front)
      {
            printf("Queue is full");
      }
       else{
            rear= (rear+1)%N;
            queue[rear]=x;
       }
}

void dequeue(int x)
{
      if (front == -1 || rear == -1)
      {
            printf("Queue is empty");
      }
      else if (front == rear)
      {
            front = rear = -1;
      }
      else
      {
            printf("The deleted element is %d\n", queue[front]);
             front =(front+1)%N;
      }
}

void display()
{
      if (front == -1 || rear == -1)
      {
            printf("Empty queue");
      }
      else
      {
           while(i!=rear)
            {
                  printf("%d\n", queue[i]);
                  i =(i+1)%N;
            }
            printf("%d\n",queue[rear]);
      }
}
int main()
{

      enqueue(1);
      enqueue(2);
      enqueue(3);
      dequeue(1);
      enqueue(4);
      enqueue(5);
      display();

      return 0;
}
