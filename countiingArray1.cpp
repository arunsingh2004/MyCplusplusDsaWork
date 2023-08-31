#include<bits/stdc++.h>
#include<vector>
using namespace std;
void counting_sort(int arr[],int n){
    int largest=-1;
    //finding largest number in array
    for (int i = 0; i < n; i++)
    {
      largest=max(largest,arr[i]);
    }
   vector<int> freq(largest+1,0);
//    int*freq = new freq[largest+1];
//update the frequency
   for (int i = 0; i<n; i++)
   {
      freq[arr[i]]++;
   }
   //Put back the element from freq into original array
   int j=0;
    for (int i= 0; i<=largest; i++)
    {
      while(freq[i]>0){
       arr[j]=i;
       freq[i]--;
       j++;
      }
    }
    
   return;
    
}
 int main(){
      int n;
      cin>>n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
            cin>>arr[n];
      }
     counting_sort(arr,n);
       for (int i = 0; i < n; i++)
       {
             cout<<arr[i]<<" ";
       }
     
      cout<<endl;

      
      return 0;
 }
