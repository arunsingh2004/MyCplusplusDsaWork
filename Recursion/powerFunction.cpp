#include<bits/stdc++.h>
using namespace std;

int powerFunc(int a,int n){
    
    //base case
    if(n==0){
    return 1;                                                                                                                                                                    
    } 
       
       //rec case
       return a*powerFunc(a,n-1);

}

//optimising sollution (log(n) time taken)
int powerFuncOP(int a,int n){
//base case
    if(n==0){
    return 1;                                                                                                                                                                    
    } 


int subProb= powerFuncOP(a,n/2);
int subProbsq = subProb*subProb;

if(n&1){
      return a*subProbsq;
}

return subProbsq;



}


int main()
{

      int a,n;
       cin>>a>>n;
       cout<<powerFunc(a,n);
       cout<<powerFuncOP(a,n);
return 0;
}