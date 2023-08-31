#include<iostream>
using namespace std;
 int main(){
  char sentence[100];
  char temp = cin.get();
   int len=1;
   while(temp!='\n'){
  sentence[len++]= temp;
       cout<<temp;
       //update the value of temp
       temp=cin.get();

   }
   sentence[len]='\0';
   cout<<sentence<<endl;
   cout<<"Length"<<len<<endl;
      // cin>>sentence;
      // cout<<sentence;
      return 0;

 }
