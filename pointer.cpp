#include<bits/stdc++.h>
using namespace std;
int main(){
      int x=10;
      int *y=&x;
      //Address of pointer variable 
      cout<<&y<<endl;

      cout<<y<<endl;
      cout<<&x<<endl;
      //Pointer to pointer
      int **z= &y;
      cout<<z<<endl;
      float h= 5&3;
      cout<<h<<endl;
      int a=3;
      int &b=a;
      b++;
      cout<<a<<endl;
      cout<<b<<endl;

      return 0;
}