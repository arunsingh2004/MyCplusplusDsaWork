#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int key){
for(int i=0; i<n;i++){
      if(arr[i]==key){
            return i;
      }
}
//out of the loop
      return -1;
}
int main(){

      int n;
      cout<<"Enter the size of array";
      cin>>n;
   int arr[n];
      for(int i=0;i<n;i++){
            cin>>arr[i];
      }
      int key;
      cout<<"Enter the key you want to search";
      cin>>key;
      // cout<<linear_search(arr,n,key)<<endl;
      int index= linear_search(arr,n,key);
      if(index!=-1){
            cout<<"key is present at index"<<index<<endl;
      }
      else{
            cout<<key<<"Not found!"<<endl;
      }

      
      return 0;
}