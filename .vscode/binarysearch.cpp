#include<iostream>
using namespace std;
int binary_search(int arr[],int n, int key){
      int s = 0;
      int e= n-1;
      while(s<=e){
            int mid = (s+e)/2;
            if(arr[mid]==key){
                  return mid;
            }
            else if(arr[mid]>key){
                  e= mid-1;
            }
            else{
                  s=mid+1;
            }
      }
      
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
      //  cout<<binary_search(arr,n,key)<<endl;
       int index= binary_search(arr,n,key);
       if(index!=-1){
             cout<<"key is present at index"<<index<<endl;
       }
       else{
             cout<<key<<"Not found!"<<endl;
       }

      return 0;
 }
