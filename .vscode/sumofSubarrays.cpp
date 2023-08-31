#include<iostream>
using namespace std;
int largestSubarraySum(int arr[], int n){
      int largest_sum=0;
 for(int i=0; i<n;i++){
     
      for(int j=i; j<n;j++){
          int subarraySum = 0;
            for(int k=i; k<=j; k++){

          subarraySum+=arr[k];
            }
        largest_sum= max(largest_sum,subarraySum);
      }

 } return largest_sum;
 
 
}
int main(){
      int n;
      cout<<"Enter the size of array";
      cin>>n;
      int arr[n];
      for(int i=0; i<n;i++){
            cin>>arr[i];
      }

      cout<<largestSubarraySum(arr,n);
      return 0;
}