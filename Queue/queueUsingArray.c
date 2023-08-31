#include <stdio.h>
#include <stdlib.h>
#define N 100 
int queue[N];
int front, rear = -1;

void enqueue(int x)
{
      if (rear == N - 1)
      {
            printf("overflow condition");
      }
      else if (front == -1 || rear == -1)
      {
            front = rear = 0;
            queue[rear] = x;
      }
      else
      {
            rear++;
            queue[rear] = x;
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
            front++;
      }
}
void peek()
{
      if (front == -1 || rear == -1)
      {
            printf("Empty queue");
      }
      else
      {
            printf("The peek value is: %d\n", queue[front]);
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
            for (int i = front; i <=rear; i++)
            {
                  printf("The element of %d queue list is: %d\n",i, queue[i]);
            }
      }
}
int main()
{

      enqueue(1);
      enqueue(2);
      enqueue(3);
      enqueue(4);
      dequeue(1);
      peek();
      display();

      return 0;
}
