#include<iostream>
using namespace std;

int largestElement(int arr[] ,int n) {
    int cs=0;
    int largest=INT_MIN;
     for (int i = 0; i < n; i++)
     {
      cs=arr[i];
      largest = max(largest,cs);
     }
      return largest;
}
int main(){
      int n;
      cin>>n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
            cin>>arr[i];
      }
      cout<<largestElement(arr,n);
      return 0;
}