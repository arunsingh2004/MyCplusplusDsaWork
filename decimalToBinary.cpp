#include<iostream>
// #include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n){
     int x=1;
     int ans=0;
     while (x<=n)
     {
           x*=2;
           
     }
           x/=2;
     while (x>0) 
     {
           int lastDigit= n/x;
           n-=lastDigit*x;
           x/=2;
           ans=ans*10 + lastDigit;
     }
     
     return ans;
     }
     
     
     //shortcut

//      while(n>0){
//        int last_bit= (n&1);
//        ans+=p*last_bit;

//        p=p*10;
//        n=n>>1;
//      }

int main(){ 
      int n;
      cin>>n;
      cout<<decimalToBinary(n)<<endl;
      return 0;
}