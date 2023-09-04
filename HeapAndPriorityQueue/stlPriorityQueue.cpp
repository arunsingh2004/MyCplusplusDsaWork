#include<bits/stdc++.h>
using namespace std;

//custom comapsre for min heap
 class Compare{
      public:
      bool operator()(int a,int b){
            return a>b;
      }
      };

int main()
{

      int arr[]= {10,15,20,13,6,90};
      int n= sizeof(arr)/sizeof(int);

      //  //max heap
      // priority_queue<int> pq;

      // for(int x:arr){
      //     pq.push(x);
      // }

      // while(!pq.empty()){

      //      cout<<pq.top()<<endl;
      //      pq.pop();

      //      }

      //for min heap
      //priority queue is a container adaptor that provides the same interface as a standard queue but supports operations related to priorities. It also has an associated
      //compare function that specifies whether the element returned by the top() function is the greatest or the smallest among all elements in the container.
      //by default it is max heap
      //to make it min heap we have to pass a comparator function

     // priority_queue<int,vector<int>,greater<int>> pq;
      priority_queue<int,vector<int>, Compare > pq;

      for(int x:arr){
          pq.push(x);
      }

      while(!pq.empty()){

           cout<<pq.top()<<endl;
           pq.pop();

           }
             

return 0;
}