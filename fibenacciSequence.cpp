#include<iostream>
using namespace std;
void fib(int n){
      int t1=0;
      int t2=0;
      int nexTerm=0;
      for (int i = 0; i <=n; i++)
      {
            cout<<i<<endl;
            nexTerm=t1+t2;
            t1=t2;
            t2=nexTerm;
      }
      return;
      
}
int main(){
      int n;
cin>>n;
 fib(n);

return 0;
}