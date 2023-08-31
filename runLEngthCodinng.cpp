#include<bits/stdc++.h>
using namespace std;
string compressString(string str){
int n=str.length();
string output;
for (int i = 0; i < n; i++)
{
    int count=1;
     while (i<n-1 && str[i+1]==str[i]);
     {
        count++;
        i++;
     }
     output+=str[i];
//The to_string() method takes a single integer variable or other data type and converts into the string
     output+=to_string(count);

}
if (output.length()>str.length())       
{
    return str;
}
return output;

 
}
 int main(){
    //   string s1="aaabbccddee";
    string s1;
    cin>>s1;
  cout<<compressString(s1)<<endl;
   string s2 ="abcd";
  

 cout<<compressString(s2)<<endl;
      return 0;
       }