
#include<bits/stdc++.h>
using namespace std;


void printArray(int *arr,int n){

      for (int i = 0; i < n; i++)
      {
            cout<<arr[i];
      }
      
}
void fillArray(int *arr ,int i, int n,int val){
   
   //base case

   if(i==n){
      printArray(arr,n);
      return;
   }

   //rec case 
   arr[i]= val;
   fillArray(arr,i+1,n,val+1);

   //backtracking
   arr[i] = -1*arr[i];

}
int main()
{

      int arr[100]= {0};

      int n;
       cin>>n;

       fillArray(arr,0,n,1);
       cout<<" "<<endl;
       printArray(arr,n);
return 0;
}




//when we use vector array then we have to remmber (STL are passed by value)
//every  time vector make new array when element insert 


#include<bits/stdc++.h>
#include<vector>
using namespace std;


void printArray(vector<int> arr,int n){

      for (int i = 0; i < n; i++)
      {
            cout<<arr[i];
      }
      
}
void fillArray(vector<int> &arr ,int i, int n,int val){
   
   //base case

   if(i==n){
      printArray(arr,n);
      return;
   }

   //rec case 
   arr[i]= val;
   fillArray(arr,i+1,n,val+1);

   //backtracking
   arr[i] = -1*arr[i];

}
int main()
{

      vector<int> arr(100,0);

      int n;
       cin>>n;

       fillArray(arr,0,n,1);
       cout<<" "<<endl;
       printArray(arr,n);
return 0;
}


