#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
      int n, k, x;
      cin >> n >> k >> x;

      if (k > n || k - 1 > x)
      {
            cout << "-1" << endl;
            return;
      }

      int count = 0, total = 0, t = k;
      while (t)
      {
            total += t;
            count += 1;
            t--;
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

int main()
{
      int t;
      cin >> t;
      while (t)
      {
            solve();
            t--;
      }
      return 0;
}
