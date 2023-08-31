#include<bits/stdc++.h>
using namespace std;

 void printBoards(int n){

 }
  void canPlease(){
      
  }
bool solveQueen(int n, int board[][20],int i){
      //base case
      if (i==n)
      {
            printBoards(n,boards);
            return true;
      }
      //rec case
      //try to place a queen in every row
      for (int j = 1; j < n; j++)  
      {
           //whether the current i,j safe or not
           if (canPlease(board,n,i,j))
           {
            
           }
           
      }
      
}
 int main(){
      //your code goes here
       int board[20][20]={0};
       int n;
        cin>>n;
       return 0;
 }