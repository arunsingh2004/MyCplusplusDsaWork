// // #include <iostream>
// // #include <vector>
// // #include <unordered_set>

// // int smallestMissingInteger(const std::vector<int> &nums)
// // {
// //       std::unordered_set<int> numSet(nums.begin(), nums.end());

// //       int longestSeqSum = 0;
// //       int currentSum = 0;

// //       for (int num : nums)
// //       {
// //             currentSum += num;

// //             if (numSet.find(currentSum + 1) == numSet.end())
// //             {
// //                   return currentSum + 1;
// //             }
// //       }

// //       return -1; // Indicates that there is no missing integer after the sum of the longest sequential prefix
// // }

// // int main()
// // {
// //       // Example 1
// //       std::vector<int> nums1 = {1, 2, 3, 2, 5};
// //       int result1 = smallestMissingInteger(nums1);
// //       std::cout << "Example 1: " << result1 << std::endl;

// //       // Example 2
// //       std::vector<int> nums2 = {3, 4, 5, 1, 12, 14, 13};
// //       int result2 = smallestMissingInteger(nums2);
// //       std::cout << "Example 2: " << result2 << std::endl;

// //       return 0;
// // }

// // #include <iostream>
// // #include <algorithm>

// // using namespace std;

// // class Solution
// // {
// // public:
// //       long long numberOfPowerfulInt(long long start, long long finish, int limit, string s)
// //       {
// //             long long c = 0;

// //             if (start > LLONG_MAX - finish || start < LLONG_MIN || finish < LLONG_MIN || finish > LLONG_MAX)
// //             {
// //                   return 0;
// //             }

// //             for (long long i = start; i <= finish; i++)
// //             {
// //                   string str = to_string(i);
// //                   int len = s.length();

// //                   auto mismatchIt = mismatch(str.rbegin(), str.rbegin() + len, s.rbegin());

// //                   if (mismatchIt.first == str.rend() && all_of(str.begin(), str.end() - len, [limit](char d)
// //                                                                { return d - '0' <= limit; }))
// //                   {
// //                         c++;
// //                   }
// //             }

// //             return c;
// //       }
// // };

// // int main()
// // {
// //       Solution solution;

// //       // Example usage
// //       long long start = 10;
// //       long long finish = 100;
// //       int limit = 3;
// //       string s = "0";

// //       long long result = solution.numberOfPowerfulInt(start, finish, limit, s);
// //       cout << "Result: " << result << endl;

// //       return 0;
// // }

// #include <iostream>
// #include <vector>

// int smallestMissingInteger(std::vector<int> &nums)
// {
//       int longestSeqSum = 0;   // Sum of the longest sequential prefix
//       int smallestMissing = 1; // Smallest missing integer

//       for (int num : nums)
//       {
//             // If the current number is part of the sequential prefix
//             if (num == longestSeqSum + 1)
//             {
//                   longestSeqSum = num;
//             }
//             else
//             {
//                   // If there is a missing integer in the sequence
//                   if (num > longestSeqSum + 1)
//                   {
//                         smallestMissing = longestSeqSum + 1;
//                         break;
//                   }
//             }
//       }

//       // If all numbers are part of the sequential prefix, return the next integer
//       return longestSeqSum + 1;
// }

// int main()
// {
//       // Example usage
//       std::vector<int> nums = {1, 2, 3, 2, 5};
//       int result = smallestMissingInteger(nums);

//       std::cout << "Result: " << result << std::endl;

//       return 0;
// }

#include <iostream>
#include <vector>

const int MOD = 998244353;

int count_beautiful_grids(int n, int m)
{
      std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));

      for (int i = 1; i <= n; ++i)
      {
            for (int j = 1; j <= m; ++j)
            {
                  if (i == 1 && j == 1)
                  {
                        dp[i][j] = 2;
                  }
                  else if (i == 1)
                  {
                        dp[i][j] = (dp[i][j - 1] * 2) % MOD;
                  }
                  else if (j == 1)
                  {
                        dp[i][j] = (dp[i - 1][j] * 2) % MOD;
                  }
                  else
                  {
                        dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
                  }
            }
      }

      return (dp[n][m] - 2 + MOD) % MOD; // Subtract 2 to account for the two invalid cases
}

int main()
{
      int n, m;
      std::cout << "Enter the number of rows and columns of the grid: ";
      std::cin >> n >> m;

      int result = count_beautiful_grids(n, m);
      std::cout << result << std::endl;

      return 0;
}
