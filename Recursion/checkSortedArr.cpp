#include<bits/stdc++.h>
using namespace std;

 bool checkSortedarray(int arr[],int n){

      if(n==1 || n==0){
            return true;      
      }
         

         //rec case
         if(arr[0]<arr[1] && checkSortedarray(arr+1,n-1) ){
            return true;
         }

         return false;

 }
int main()
{

      int n;
       cin>>n;

       int arr[n];
       for (int j=0; j<n;j++){
            cin>>arr[j];
       }

       cout<<checkSortedarray(arr,n);

return 0;
}