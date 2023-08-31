#include<iostream>
using namespace std;
int main(){
      int mark[100];
      int n;
      cout<<"Enter the number of student";
      cin>>n;
      //Input
      for(int i=0;i<n;i++){
            cin>>mark[i];
      }
 //Output
 for(int i=0;i<n;i++){
      cout<<mark[i]<<" ";
 }
 cout<<endl;
      return 0;
}