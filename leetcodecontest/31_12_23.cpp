#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
      int maximumLength(std::string s)
      {
            int ans = 0;
            std::vector<std::vector<int>> freq(26);

            for (int i = 0; i < s.length(); i++)
            {
                  int j = i;
                  while (j < s.length() && s[j] == s[i])
                  {
                        j++;
                  }
                  freq[s[i] - 'a'].push_back(j - i);
                  i = j - 1;
            }

            for (auto &x : freq)
            {
                  if (x.empty())
                        continue;

                  std::sort(x.begin(), x.end(), std::greater<int>());
                  int sz = x.size();

                  ans = std::max(ans, x[sz - 1] - 2);

                  if (sz > 1)
                  {
                        ans = std::max(ans, std::min(x[sz - 1] - 1, x[sz - 2]));
                  }

                  if (sz > 2)
                  {
                        ans = std::max(ans, x[sz - 3]);
                  }
            }

            if (ans == 0)
                  ans = -1;
            return ans;
      }
};

int main()
{
      Solution solution;
      std::cout << solution.maximumLength("aaaa") << std::endl;   // Output: 2
      std::cout << solution.maximumLength("abcdef") << std::endl; // Output: -1
      std::cout << solution.maximumLength("abcaba") << std::endl; // Output: 1

      return 0;
}
