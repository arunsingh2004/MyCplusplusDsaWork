#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
      int testcase;
      cin >> testcase;
      while (testcase--)
      {
            int n;
            cin >> n;
            vector<pair<int, int>> arr;
            for (int i = 0; i < n; i++)
            {
                  int x;
                  cin >> x;
                  arr.push_back({x, i});
            }

            sort(arr.begin(), arr.end());
            int p = n;
            for (int i = 0; i < n; i++)
            {
                  arr[i].first = p;
                  p--;
            }

            int ans[n];
            for (int i = 0; i < n; i++)
            {
                  ans[arr[i].second] = arr[i].first;
            }
            for (int i = 0; i < n; i++)
                  cout << ans[i] << " ";
            cout << endl;
      }
      return 0;
}