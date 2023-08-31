#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
      cin>>n;
      int *arr= new int[n];
      //Dynamic Array
  for (int i = 0; i<n; i++)
  {
      arr[i]=i;
      cout<<arr[i]<<" ";
  }
  //Delete
  delete [] arr;
      
  
      return 0;
}