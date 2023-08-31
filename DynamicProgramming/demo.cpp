#include<bits/stdc++.h>
using namespace std;

int fib2(int n){
      int dp[n+1]={0};

      //base case
      dp[0]=0;
      dp[1]=1;

      //Bottom up dp
      for (int i = 2; i <=n; i++)
      {
            dp[i]= dp[i-1] +dp[i-2];
      }
      
      
      for (int i = 0; i<=n; i++)
      {
            cout<<dp[i]<<" ";
      }
      return dp[n];
}
int main()
{
      int n;
      cin>>n;
    
      cout<<fib2(n)<<endl;


      
      
return 0;
}