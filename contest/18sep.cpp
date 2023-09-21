#include <bits/stdc++.h>
using namespace std;

int main()
{
      int testcase;
      cin >> testcase;
      while (testcase--)
      {
            int n, k, x;
            cin >> n >> k >> x;

            if (k > n || k - 1 > x)
            {
                  cout << "-1" << endl;
            }
            int count = 0, total = 0, testcase = k;
            while (testcase)
            {
                  total += testcase;
                  count += 1;
                  testcase--;
            }
            total -= k;
            if (x == k)
            {
                  total += (n - count) * (x - 1);
            }
            else
            {
                  total += (n - count) * (x);
            }
            cout << total << endl;
      }
      return 0;
}