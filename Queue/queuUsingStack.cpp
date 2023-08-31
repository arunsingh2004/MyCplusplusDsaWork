#include<bits/stdc++.h>
#include<stack>
using namespace std;

struct  Queue{
 stack<int> s1 ,s2;


  void enQueue(int x){
      // first remove all element from stack one to stack two 
      while(!s1.empty()){
          s2.push(s1.top());
          s1.pop();
      }
   //push element in stack
      s1.push(x);

       while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
       }
  }

   void deQueue(){
      if(s1.empty()){
            cout<<"Queue is empty"<<endl;
      }

      int x = s1.top();
      s1.pop();
      cout<<"Deleted element is"<<x<<endl;;
   }
};

 int main(){
  Queue q;
  q.enQueue(3);
  q.enQueue(2);
  q.enQueue(2);
  

  q.deQueue();
      return 0;
 }

