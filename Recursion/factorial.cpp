#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
      //base case
  if(n==0){
      return 1;
  }

    //rec case
   return n*factorial(n-1);

}
int main()
{

      int n;
      cin>>n;

     factorial(n);
return 0;
}