#include<bits/stdc++.h>
#include<stack>
using namespace std;
//Challenge:Insert at Stack bottom
void insertAtBottom(stack<int> &s, int data){
       if(s.empty()){
              s.push(data);
              return;
       }
       //rec case 
       int temp=s.top();
       s.pop();
       insertAtBottom(s,data);
       s.push(temp);
}
//Challenge:Insert at Stack bottom
void reverse(stack<int> &s){
  if(s.empty()){
      return;
  }
  int t= s.top();
  s.pop();
  reverse(s);
  insertAtBottom(s,t);
}
int main(){
      stack<int> s;
      s.push('1');
      s.push('2');
      s.push('3');
      s.push('4');
      s.push('5');


   reverse(s);
   

        while (!s.empty())
         {   
           cout<<s.top()<<endl;
           s.pop();
        }
        
       return 0;
}