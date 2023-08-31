#include<bits/stdc++.h>
using namespace std;


int firstOccur(int arr[],int n,int key){

      //base case
      if(n==0){
            return -1;
      }

      //rec case
       if(arr[0]==key){
            return 0;
       }

       int subIndex = firstOccur(arr+1 ,n-1,key);

       if(subIndex!=-1){                                                                                                
  return subIndex+1;
}
return -1;
}
int lastOccur(int arr[],int n,int key){

      //base case
      if(n==0){
            return -1;
      }

      //rec case

       int subIndex = lastOccur(arr+1 ,n-1,key);

       if(subIndex==-1){                                                                                                
       if(arr[0]==key){
            return 0;
       }
       else{
            return -1;
       }
}
else{
      return subIndex+1;
}

}


int main()
{
int key;
cin>>key;
      int n;
       cin>>n;

       int arr[n];
       for (int j=0; j<n;j++){
            cin>>arr[j];
       }

       cout<<firstOccur(arr,n,key);
       cout<<endl;
       cout<<lastOccur(arr,n,key);
return 0;
}


