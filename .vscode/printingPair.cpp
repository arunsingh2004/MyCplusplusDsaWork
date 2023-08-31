#include<iostream>
using namespace std;
void parrellPair(int arr[], int n){
 for(int i=0; i<n;i++){
      int x= arr[i];
      for(int j=0; j<n;j++){
            int y= arr[j];
          cout<<x<<","<<y<<endl;;
      }
      cout<<endl;

 }
}
int main(){
      int n;
      cout<<"Enter the size of array";
      cin>>n;
      int arr[n];
      for(int i=0; i<n;i++){
            cin>>arr[i];
      }
      parrellPair(arr,n);
      return 0;
}