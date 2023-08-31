#include<bits/stdc++.h>
#include<vector>
using namespace std;
 bool compare(string a,string b){
  if (a.length()==b.length())
  {
      return a<b;//lexicographic
  }
  return a.length()<b.length();
 }
void findingSubsets(char*input, char*output,int i, int j,vector<string> &list){
      //base case
      if (input[i]=='\0')
      {
            output[j]='\0';
           string temp(output);
            list.push_back(temp);
            
            return;
      }
      //recursive call
      //Include the ith letter
      output[j]=input[i];
      findingSubsets(input,output,i+1,j+1,list);
  //Exclude the ith letter
  //overwritting
      findingSubsets(input,output,i+1,j,list);
}
int main(){
      char input[100];
      char output[100];
      vector<string> list;
      cin>>input;
      findingSubsets(input,output,0,0,list);
      sort(list.begin(),list.end(),compare);

      //print the output
      for(auto s: list){
    cout<<s<<",";
      }
      return 0;
}