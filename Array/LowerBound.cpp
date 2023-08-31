#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
 
    
    int sz = A.size();
    
    int l = 0, r = (sz-1);
    
    int answer = -1;
    
    while (l <= r) {
        int mid = (l + r) / 2;
        if (A[mid] > Val) {
            r = mid-1;
        }
        else {
            answer = A[mid];
            l = mid+1;
        }
    }
    
    return answer;
    
}


int main(){

            int n;      
            cin>>n;
            int Val;
            cin>>Val;
            vector<int> A;
            for (int i = 0; i < n; i++)
            {
                  int x;
                  cin>>x;
                  A.push_back(x);
            }


            cout<<lowerBound(A,Val)<<endl;
      return 0;
}