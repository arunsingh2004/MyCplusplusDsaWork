#include<bits/stdc++.h>
using namespace std;

bool compare(int a, int b){

      return a>b;
}

void bubbleSort(int arr[],int n){

//recursive case
 if(n==1){
      return;

 }

 for (int  j = 0; j < n-1; j++)
 {
      if(arr[j]>arr[j+1]){
          swap(arr[j],arr[j+1]);
      }
 }
 bubbleSort(arr,n-1);

//     for (int times = 0; times < n - 1; times++) {
//       //repeated swapping
//         for (int j = 0; j < n - times - 1; j++) {
//             if(compare(arr[j] , arr[j + 1])){
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
// }

}

 
int main()
{

       int n;
       cin>>n;

       int arr[n];
       for (int j=0; j<n;j++){
            cin>>arr[j];
       }

       bubbleSort(arr,n);

for (int j=0; j<n;j++){
            cout<<" "<<arr[j];
       }

return 0;
}