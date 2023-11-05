#include<bits/stdc++.h>
using namespace std;

vector<string> findPrefixStrings(vector<string> words, string prefix){
    // your code goes here
      vector<string> ans;
      for(auto word:words){
            if(word.substr(0,prefix.size())==prefix){
                  ans.push_back(word);
            }
      }
      return ans;
      
    
    
}
int main()
{
return 0;
}