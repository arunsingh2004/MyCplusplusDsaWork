#include<bits/stdc++.h>

using namespace std;
int main(){
      vector<int> arr= {1,3,4,5,6};
      int key=3;
      vector<int>::iterator it= find(arr.begin(),arr.end(),key);
      if (it!=arr.end())
      {
      cout<<"Present at Index: "<<it-arr.begin();
      }
      else {
            cout<<"Element is not found!";
      }
       return 0;
       }