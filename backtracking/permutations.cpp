#include<bits/stdc++.h>
using namespace std;

//l = starting point of string , r= ending point laast point of string
void permutation(string &a ,int l ,int r){
  //base case
      if(l==r){
            cout<<a<<",";
      }
  //permutation made
      else{
  for (int i = l; i < r; i++)
  {
      //swapping done
      swap(a[l], a[i]);

      //Recursion called
      permutation(a,l+1,r);

      //backtracking
      swap(a[l], a[i]);
  }
  
      }
}
int main()
{

      string str;
      cin>>str;
      int r = str.length();

      permutation(str,0,r);

return 0;
}