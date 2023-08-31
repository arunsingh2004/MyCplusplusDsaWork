#include<bits/stdc++.h>
using namespace std;

    

int maxSubarraySum(int arr[],int n){
       
        // Your code here
       
            //all negative elements
      bool allNeg = true;
      int largest = INT16_MIN;
      for(int x=0;x<=n;x++){
            if(arr[x]>0){
                  allNeg = false;
                  break;
            }
            largest = max(largest,arr[x]);
            
      }
           
      //special case
      if(allNeg){
            return largest;
      }




       //kadane's algorithm
       int cs = 0;
       int largestsum = 0;
       for(int i = 0; i < n; i++){
             cs = cs + arr[i];
             if(cs < 0){
                   cs = 0;
             }
             largestsum = max(largestsum,cs);
       }

       return largestsum;        
 }

int main()
{
      int n;
      cout<<"Enter the size of array";
      cin>>n;
      
      int arr[n];
      for (int i = 0; i < n; i++)
      {
            cin>>arr[i];
      }
      cout<<maxSubarraySum(arr ,n);
return 0;
}