#include<bits/stdc++.h>
#include<vector>
using namespace std;
 class Heap{
  vector<int> v;
 //store all data in heap

   void heapify(int i){
     
      int left = 2*i;
      int right = 2*i+1;
      int min_idx = i;
      int last = v.size()-1;
      if(left<=last && v[left]<v[i]){
        min_idx = left;
      }
      if(right<=last && v[right]<v[min_idx]){
        min_idx = right;
      }
      if(min_idx!=i){
        swap(v[i],v[min_idx]);
        heapify(min_idx);
      }
   }
 public: 
 int deafult_size;
 Heap(int deafult_size = 10){
      v.reserve(deafult_size + 1);
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
 
//return minimum element in heap
 int top(){
 return v[1];
 }

int pop(){
  //remove the top most element
  int last = v.size()-1;
  swap(v[1],v[last]);
  v.pop_back();
   heapify(1);
   }

bool isEmpty(){
  return v.size()==1;
  }
 
 void print(){
   for (auto i : v) {
     cout<<i<<" ";
   }
   cout<<endl;
 }
 
 int size(){
   return v.size()-1;
 }
 
 void buildHeapOptimised(){
   for (int i = v.size()-1; i >=1; i--) {
     heapify(i);
   }
 }
 
 void buildHeap(){
   for (int i = 2; i < v.size(); i++) {
     int idx = i;
     int parent = i/2;
     while(idx>1 && v[idx]<v[parent]){
       swap(v[idx],v[parent]);
       idx = parent;
       parent = parent/2;
     }
   }
 }
 
 void heapSort(){
   int n = v.size()-1;
   for (int i = 1; i <=n; i++) {
     swap(v[1],v[n-i+1]);
     heapify(1);
   }
 }
 
 int kthLargest(int k){
   int n = v.size()-1;
   int ans = -1;
   for (int i = 1; i <=k; i++) {
     ans = top();
     swap(v[1],v[n-i+1]);
     heapify(1);
   }
   return ans;
 }
 
 void deleteElement(int data){
   int n = v.size()-1;
   int idx = -1;
   for (int i = 1; i <=n; i++) {
     if(v[i]==data){
       idx = i;
       break;
     }
   }
   if(idx==-1){
     return;
   }
   swap(v[idx],v[n]);
   v.pop_back();
   heapify(idx);
 }
 
 void updateElement(int data,int newData){
   int n = v.size()-1;
   int idx = -1;
   for (int i = 1; i <=n; i++) {
     if(v[i]==data){
       idx = i;
       break;
     }
   }
   if(idx==-1){
     return;
   }
   v[idx] = newData;
   int parent = idx/2;
   while(idx>1 && v[idx]<v[parent]){
     swap(v[idx],v[parent]);
     idx = parent;
     parent = parent/2;
   }
   heapify(idx);
 }
 
 int sumOfElements(){
   
    int sum = 0;
    for (int i = 1; i < v.size(); i++) {
      sum+=v[i];
    }
    return sum;
}
 
 };


int main()
{

int data;
cin>>data;
Heap h;
while(data!=-1){
  h.push(data);
  cin>>data;
}

return 0;
}