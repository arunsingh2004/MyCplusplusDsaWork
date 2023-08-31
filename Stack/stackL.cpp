#include<bits/stdc++.h>
#include"stackL.h"
using namespace std;

int main(){
      Stack<char> s;
      s.push('h');
      s.push('j');
      s.push('g');
      s.push('k');
      s.push('k');

        while (s.empty())
        {
            cout<<s.top();
            s.top();
        }
        
      return 0;
}
