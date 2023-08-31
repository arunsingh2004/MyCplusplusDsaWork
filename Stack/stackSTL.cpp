#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
  stack<string> books;
   books.push("C++");
   books.push("Java");
   books.push("OOPS");
   books.push("Python");

   while(!books.empty()){
      cout<<books.top()<<endl;
      books.top();
   }
       return 0;
}