#include<bits/stdc++.h>
#include<vector>
using namespace std;
void printArray(vector<int> arr, int n){
 for (int i = 0; i < n; i++)
      {
            cout<<arr[i]<<" ";
      }
      cout<<endl;
}
//STL in this case pass by reference is call
void fillArray(vector<int> &arr, int i, int n,int val){
     //base case
     if (i==n)
     {
      //print array
      printArray(arr,n);
      return;
      
     }
      //recurcive case
      arr[i]=val;
      fillArray(arr,i+1,n,val+1);
      //bacltracking step
       arr[i]= -1*arr[i];
     
}
int main(){
       vector<int> arr(100,0);
       int n;
      cin>>n;
       fillArray(arr,0,n,1);
       printArray(arr,n);
       return 0;
}