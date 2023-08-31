#include<iostream>
#include<vector>
using namespace std;
 int main(){
      //Demo vector
      // vector<int> arr={1,2,3,4};
      //fill constructor
       vector<int> arr(10,7);

//fill
vector<int> visted(1000,0);
  //Pop back
//   arr.pop_back();
      //Push Back
      arr.push_back(16);

//print all the elements
 for (int i = 0; i < arr.size(); i++)
 {
      cout<<arr[i]<<endl;
 }
 
      //size of vector(No. of elements)
      cout<<arr.size()<<endl;

      //Capacity of the vector
      cout<<arr.capacity()<<endl;
       return 0;

 }