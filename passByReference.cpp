#include<bits/stdc++.h>
using namespace std;
void WatchVideo(int *viewsPtr){
*viewsPtr =*viewsPtr + 1;
}
int main(){
  int views =100;
  WatchVideo(&views);
  cout<<views<<endl;
      return 0;
}