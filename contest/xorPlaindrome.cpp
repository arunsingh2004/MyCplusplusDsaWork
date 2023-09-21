#include <bits/stdc++.h>
using namespace std;
int main()
{
      int testcase;
      cin >> testcase;
      for (int i = 0; i < testcase; i++)
      {
            int length;
            string str;
            cin >> str;
            int count = 0;
            int j = length - 1;
            while (i <= j)
            {
                  if (str[i] != str[j])
                  {
                        count++;
                  }
                  i++;
                  j--;
            }
            cout << (count + 1) / 2 << endl;
      }

      return 0;
}