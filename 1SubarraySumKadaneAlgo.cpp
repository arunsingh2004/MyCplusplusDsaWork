#include<iostream>
using namespace std;
int max_subarray_sum(int arr[], int n){
      int cs=0;
      int largestsum=0;
      for (int i  = 0;  i< n; i++)
      {
            cs=cs+arr[i];
            if (cs<0)
            {
                  cs=0;
            }
            largestsum=max(largestsum,cs);
            
      }
      

  return largestsum;
} 
int main(){
      int n;
      cout<<"Enter the size of array";
      cin>>n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
            cin>>arr[i];
      }
      cout<<max_subarray_sum(arr,n);
      return 0;
}