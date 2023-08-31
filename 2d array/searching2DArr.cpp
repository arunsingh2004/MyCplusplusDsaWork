#include<bits/stdc++.h>
using namespace std;
pair<int,int> stairCaseSearech(int arr[][4],int n,int m,int key){
  
  //later if the element is not present return{-1,-1}
  if (key<arr[0][0] || key>arr[n-1][m-1])
  {
    return {-1,-1};
  }
  //Staircase Search
  int i=0;
  int j=m-1;
  while (i<=n-1 && j>=0)
  {
      if(arr[i][j]==key){
      return {i,j};
      }
      else if (arr[i][j]>key)
      {
            j--;
      }
      else{
            i++;
      }
  }
  return {-1,-1};
  
}
int main(){
      //2D Row & Column wise sorted Array
   int arr[][4]={{10,20,30,40},
      {15,25,35,45},
      {27,29,37,48},
      {32,33,39,50}};
int n=4, m=4;
pair<int,int> coords=stairCaseSearech(arr,n,m,27);
//in pairs ther is two element always so we call (first,second)
cout<<coords.first<<" "<<coords.second<<endl;
      return 0;
}
//time complexity is O(N+M) linear time