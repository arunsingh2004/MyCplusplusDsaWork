#include<bits/stdc++.h>
using namespace std;

bool isSafe(int mat[][9], int i ,int j,int no,int n){

//check for row and col
for (int  k = 0; k < n; k++)
{
      if(mat[k][j] == no || mat[i][k]==no){
         return false;
      }
}

//check in subgrid
int sx = (i/3)*3;
int sy = (j/3)*3;
for (int  k = sx; k < sx+3; k++){
      for (int  l = sy; l < sy+3; l++){
         
         if(mat[k][l] == no){

     
                       return false;
}
      }

}


    return true;  
};


bool solveSudoku(int mat[][9], int i ,int j,int n){

//base case
if(i==n){
      //print solution

      for(int i =0 ; i<9;i++){
            for(int j =0 ; j<9;j++){
                  cout<<mat[i][j]<<" ";
      }
      cout<<endl;
      }
      return true;
}


//rec case
if(j==9){
      return solveSudoku(mat,i+1,0,n);
}

//skip the prefilled cell
if(mat[i][j]!=0){
      return solveSudoku(mat,i,j+1,n);
}

//cell to ne filled
//try out all possibilities
for(int no =1; no<=n;no++){
      //whether it is safe to place the number or not
      if(isSafe(mat,i,j,no,n)){
            //place the number

              mat[i][j] = no;
          bool solveSubproblem = solveSudoku(mat,i,j+1,n);
          if(solveSubproblem==true){
            return true;
          }
}
}

//backtrack
mat[i][j] = 0;
return false;

};


int main()
{


      int n=9;
      int mat[9][9]= {

            {5,3,0,0,7,0,0,0,0},
            {6,0,0,1,9,5,0,0,0},
            {0,9,8,0,0,0,0,6,0},
            {8,0,0,0,6,0,0,0,3},
            {4,0,0,8,0,3,0,0,1},
            {7,0,0,0,2,0,0,0,6},
            {0,6,0,0,0,0,2,8,0},
            {0,0,0,4,1,9,0,0,5},
            {0,0,0,0,8,0,0,7,9},
            
           
      };

      if(!solveSudoku(mat,0,0,n)){
           cout<<"No Solution Exits";
      }
return 0;
}