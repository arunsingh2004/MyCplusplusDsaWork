#include<bits/stdc++.h>

using namespace std;
 int main(){
      string s;//Dynamic Array
      //  for(char ch: s){
      //       cout<<ch<<",";
      //  }
      int n=5;
      vector<string> sarr;
      string temp;
      while (n--)
      {
            
      getline(cin,temp);
      sarr.push_back(temp);
      }
      for(string x: sarr){
            cout<<x<<","<<endl;
      }
     cout<<s<<endl;

      return 0;
 }
 