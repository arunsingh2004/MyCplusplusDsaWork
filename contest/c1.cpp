#include <bits/stdc++.h>
#define int long long int
#define F first
#define S second
#define pb push_back
#define que_max priority_queue<int>
#define que_min priority_queue<int, vector<int>, greater<int>>;
#define endl "\n"
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
#endif

      int32_t t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            set<int> st;
            for (int i = 1; i <= n; i++)
            {
                  int x;
                  cin >> x;
                  st.insert(x);
            }
            int y = 1, c = 0;
            while (y != -1 || c < (2 * n))
            {
                  cout << *(st.end()) + 1 << endl;
                  st.insert(*(st.end()) + 1);
                  cin >> y;
            }
            for (int i = 0; i < (2 * n); i++)
            {
                  if (st.find(i) == st.end())
                  {
                        cout << i << endl;
                        break;
                  }
            }
      }

      return 0;
}
