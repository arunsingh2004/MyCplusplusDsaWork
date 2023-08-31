#include<bits/stdc++.h>
using namespace std;
void PrintSpiral(int arr[][10],int n, int m){
      int startRow=0;
       int endRow=n-1;
        int startCol=0;
         int endCol=m-1;
      while (startCol<=endCol && startRow<=endRow)
      {
           
      
      //Start Row
    for (int col = startCol; col <=endCol; col++)
    {
      cout<<arr[startRow][col]<<" ";
    }
    //End Col
    for (int row = startRow+1; row<=endRow ; row++)
    {
      cout<<arr[row][endCol]<<" ";
    }
    //End Row
    for (int col = endCol-1; col>=startCol; col--)
    {
      if (startRow==endRow)
      {
            break;
      }
      
      cout<<arr[endRow][col]<<" ";
    }
    //Start Col
    for (int row = endRow-1; row>=startRow+1; row--)
    {
      //Avoiding Duplicate Printing of element
      if (startCol==endCol)
      {
            break;
      }
      
      cout<<arr[row][startCol]<<" ";
    }
    //Update the variables to point to linear object
    startRow++;
    endCol--;
    endRow--;
    startCol++;
 
      }
}
int main(){
   int arr[][10]={
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12},
      {13,14,15,16}
   };
int n=4, m=4;
PrintSpiral(arr,n,m);
      return 0;
}