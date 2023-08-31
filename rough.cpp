#include<iostream>
using namespace std;
 int countDistnict(int arr[], int n){
       int count =1;
       for (int i = 0; i < n; i++)
       {
             int j;
             for (int j = 0; j <i; j++)
             {
                   if (arr[i]==arr[j] && i!=j)
                   {

                         break;
                   }
                   
                   if (i==j)
                   {

                         count++;
                   }
             }
             
       }
       return count;
 }
int main(){
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
         cin>>arr[i];
   }
cout<<countDistnict(arr,n);
   
return 0;
}