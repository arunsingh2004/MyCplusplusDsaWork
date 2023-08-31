#include<bits/stdc++.h>
#include<vector>
using namespace std;
 class Heap{
 //store all data in heap
   vector<int> v;
 public: 
 int default_size;
 Heap(int deafult_size = 10){
      v.reserve(default_size+1);
      v.push_back(-1);
 }
  void push(int data){
      //add data at the end of heap
      v.push_back(data);
    int idx = v.size()-1;
   int parent = idx/2;

  while(idx>1 && v[idx]<v[parent]){
    swap(v[idx],v[parent]);
    idx = parent;
    parent = parent/2;
  }
  }

 
 };
int main()
{



return 0;
}