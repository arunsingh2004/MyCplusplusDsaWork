#include<iostream>
using namespace std;
//Given the sentence ,count the number of //alphabets, digit and spaces int the sequence
 int main(){
  //store and then count
  //read one by one and then count
  char ch;
  ch=cin.get();
  //count
  int alpha=0;
  int digit=0;
  int space=0;
   while(ch!='\n'){
      if (ch>='0' && ch<='9')
      {
            digit++;
      }
      else if ((ch>='a'&& ch<='z')or(ch>='A' && ch<='Z'))
      {
            alpha++;
      }
       else if(ch==' ' or ch=='\t'){
            space++;
       }
      ch= cin.get();
      
   }
   cout<<"Total alphabet"<<alpha<<endl;
   cout<<"Total space"<<space<<endl;
   cout<<"Total digit"<<digit<<endl;
   
   

       return 0;

 }