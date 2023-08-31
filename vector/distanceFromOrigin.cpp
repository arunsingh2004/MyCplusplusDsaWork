#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a, pair<int, int> b){
    float x = sqrt((a.first*a.first) + (a.second*a.second));
    float y = sqrt((b.first*b.first) + (b.second*b.second));
    return x < y;
}

vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    // your code  goes here
    sort(v.begin(), v.end(), comp);
    return v;
}
int main()
{
      vector<pair<int,int>> v;
      int arr[]={2,1,3,2,1};
      int arr1[]={3,2,4,4,4};
      int n = sizeof(arr)/sizeof(arr[0]);
      for(int i=0;i<n;i++){
            v.push_back(make_pair(arr[i],arr1[i]));
      }
      vector<pair<int,int>> ans = sortCabs(v);
      for(int i=0;i<n;i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
      }
return 0;
}