#include<bits/stdc++.h>
using namespace std;

class Queue{
 int *arr;
 int cs;
 int ms;
 int front;
 int rear;

public:
Queue(int default_size=5){
      ms= default_size;
      arr= new int [ms];
      cs=0;
      front=0;
      rear=ms-1;
}

bool full(){
      return cs==ms;
}
bool empty(){
       return cs==0;
}
 void push(int data){
      if (!full())
      {
                  //take the rear to the next index
                  rear = (rear+1)%ms;
                  arr[rear]= data;
                  cs++;
      }
      
 }
 
 void pop(){
      if(!empty()){
            //take the front pointer forward
            front = (front+1)%ms;
            cs--;
      }
 }
 int getFront(){
      return arr[front];
 }
};


int main()
{
      Queue myqueue(7);
       myqueue.push(1);
       myqueue.push(2);
       myqueue.push(3);
       myqueue.push(4);
       myqueue.push(5);
       myqueue.push(6);
       myqueue.push(7);
       myqueue.push(8);
       myqueue.pop();
        myqueue.pop();
       myqueue.push(9);


 while(!myqueue.empty()){
      cout<<myqueue.getFront()<<endl;
      myqueue.pop();

 }
return 0;
}
