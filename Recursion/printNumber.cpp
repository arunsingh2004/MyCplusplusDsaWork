#include<bits/stdc++.h>
using namespace std;

void printDec(int n){

//base case
      if(n==0){
            return;
      }

      //rec case
      cout<<n<<" ";
      printDec(n-1);

}
void printInc(int n){

//base case
      if(n==0){
            return;
      }

      //rec case
      printInc(n-1);
      cout<<n<<" ";

}


int main()
{

      int n;
       cin>>n;

    printDec(n);
    cout<<endl;
    printInc(n);

    
return 0;
}