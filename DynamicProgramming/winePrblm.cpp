#include<bits/stdc++.h>
using namespace std;

//top down 
int wine(int dp[][10],int prices[], int L, int R, int y){
      //base case
      if(L>R){
            return 0;
      }
      //need if the state is already
      if(dp[L][R]!=0){
            return dp[L][R];
      }
      //rec case
       int pick_left = y*prices[L] + wine(dp,prices,L+1,R,y+1);
       int pick_right = y*prices[R] + wine(dp,prices,L,R-1,y+1);

       return dp[L][R] = max(pick_right,pick_left);
}

int wines_bottom_up(int prices[],int N){

 vector<vector<int>> dp(N+1, vector<int>(N+1,0));  

 for (int i=N-1; i >=0; i--)
 {
      //bottom row to top row
      for (int j = 0; j <N; j++)
      {
            if(i<=j){
  //dp(i...j)
  int year = N-(j-i);
            }
      }
      
 }
  

     return 0; 
}
int main()
{

      int a[] ={2,3,5,1,4};
      int n =5;
      int dp[10][10] ={0};

      cout<<wine(dp,a,0,n-1,1)<<endl;
      for (int i = 0; i <n; i++)
      {
            for (int j = 0; j <n; j++)
            {
                  cout<<dp[i][j]<<" ";
            }
            cout<<endl;
      }
      
return 0;
}