#include<bits/stdc++.h>
using namespace std;

void findingSubsets(char*input, char*output,int i, int j){
      //base case
      if (input[i]=='\0')
      {
            output[j]='\0';
            if (output[0]=='\0')
            {
                  cout<<"NULL";
            }
            
            cout<<output<<endl;
            return;
      }
      //recursive call
      //Include the ith letter
      output[j]=input[i];
      findingSubsets(input,output,i+1,j+1);
  //Exclude the ith letter
  //overwritting
      findingSubsets(input,output,i+1,j);
}
int main(){
      char input[100];
      char output[100];
      cin>>input;
      findingSubsets(input,output,0,0);
      return 0;
}