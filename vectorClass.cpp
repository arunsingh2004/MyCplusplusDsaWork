#include<bits/stdc++.h>
using namespace std;
class Vector{
//front(),back(),size(),capacity()
//Data Members
int *arr;
int cs;
int ms;

//Constructor,Destructor,Methods
//we can also use a <Template<typename> T> rather write a vector like something we declare extra and universal template classes 
public:
Vector(int max_size=1){
      cs=0;
      ms=max_size;
      arr= new int[ms];
}
void push_back(int n){
      //Two cases
      
      if(cs==ms){
            //create new array and declare the old one,double the capacity
      int *oldArr=arr;
      ms=2*ms;
      arr= new int[ms];
      //copy the element
      for (int i = 0; i<cs; i++)
      {
            arr[i]=oldArr[i];
      }
      //delete old array
      delete [] oldArr;
      }
      int d;
      arr[cs]=d;
      cs++;
}
void pop_back(){
      if (cs>=0)
      {
            cs--;
      }
      
}
bool isEmpty(){
      return cs==0;
}
//front,back,At[i],[]
int back(){
  return arr[cs-1];
}
int at(int i){
  return arr[i];
}
int size(){
      return cs;
}
int capacity(){
      return ms;
}
};

 int main(){
      Vector v;
      v.push_back(1);
      v.push_back(2);
      v.push_back(3);

       return 0;
 }