//Find the sum of Subarray usingg prefix technique
#include<bits/stdc++.h>
using namespace std;

int largestSubArraySum(int arr[],int n){

      int prefix[100]= {0};
      prefix[0]=arr[0];
      for (int i = 1; i < n; i++)
      {
            prefix[i]=prefix[i-1]+arr[i];
      }
      int largest_sum=0;
      for (int i = 0; i < n; i++)
      {
            for (int j = i; j < n; j++)
            {
                  int subarraySum= i>0 ? prefix[j]-prefix[i-1] : prefix[j];
                  largest_sum=max(largest_sum,subarraySum);
            }
            
      }

      

      return largest_sum;
      
}

int main()
{

      int n;
      cin>>n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
            cin>>arr[i];
      }
      cout<<largestSubArraySum(arr,n)<<endl;
return 0;
}