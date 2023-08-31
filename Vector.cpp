//STL=Standard Template library
//vector grow itself by double 
//push_back by timecomplixity is O(1) in worst case is O(n)
#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main(){
      //Dem0o vector
//   vector<int> arr={1,2,3,4,5};
  //fill constructor
 vector<int> arr(10,7);
  // vector<int> arr(100,0);
  //pop_back use to add number removing another number mainly lastone
  arr.pop_back();
  //Push_back o(1) add number in array without removing any number
 
    
  arr.push_back(6);
  
  
  //size of vector
  cout<<arr.size()<<endl;
  //capacity of vector
  cout<<arr.capacity()<<endl;
  for (int i = 0; i <=arr.size(); i++)
{
  cout<<arr[i]<<endl;
  }
  
      return 0;
}