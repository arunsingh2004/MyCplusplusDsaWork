#include<bits/stdc++.h>
using namespace std;
//Pass by value
void applyTax(int income){
  float tax= 0.10;
 income= income-income*tax;
}
int main(){
      int income;
      cin>>income;
      applyTax(income);
      cout<<income;
      return 0;
}