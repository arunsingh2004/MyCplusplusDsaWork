// #include<bits/stdc++.h>
#include"list.h"
// using namespace std;
int main(){
      List l;
      l.push_front(1);
      l.push_front(0);
      l.push_back(2);
      l.push_back(3);
      l.push_back(3);
      
      l.insert(10,5);
      l.pop_front();
      l.remove(3);
      Node* head=l.begin();
      while (head!=NULL)
      {
            cout<<head->getData()<<"->";
            head=head->next;
      }
cout<<endl;
      cout<<l.search(3)<<endl;
      cout<<l.recursiveSearch(55)<<endl;
   
      return 0;
}
