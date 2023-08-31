#include<bits/stdc++.h>
using namespace std;

int TilingProb(int n){


      if(n<=3){
            return n;
      }

      return TilingProb(n-1) + TilingProb(n-4);
}
int main()
{

      int n;
      cin>>n;

      cout<<TilingProb(n);
return 0;
}