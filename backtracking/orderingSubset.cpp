#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;


bool compare(string a ,string b){

      if(a.length()== b.length()){
      return a<b; //lexicographic
      }
      return a.length()<b.length();

}
void findSubset(char *input,char *output  ,int i,int j,vector<string> &list){


//base case 
if(input[i]=='\0'){
      output[j]='\0';
        
   string temp(output);
     list.push_back(temp);

      return;
}

//recursive case
//Include the ith letter
output[j]=input[i];
findSubset(input,output,i+1,j+1,list);


//Exclude the ith letter
//overwriting
output[j]='\0';
findSubset(input,output,i+1,j,list);


}
int main()
{

    char input[100];
    char output[100];

      vector<string> list;
       cin>>input;
         findSubset(input,output,0,0,list);
         sort(list.begin(),list.end(),compare);


         for(auto s:list){
            cout<<s <<" ,";
         }
return 0;
}