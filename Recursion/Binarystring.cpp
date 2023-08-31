#include <bits/stdc++.h>
using namespace std;
 
// int countStrings(int n)
// {
//     int a = 1, b = 1;
//     for (int i = 1; i < n; i++) {
       
//         int temp = a + b;
//         b = a;
//         a = temp;
//     }
//     return (a + b)%10;
// }
 
 //recursive case
 int countStrings(int n)
{
    if(n==0){
      return 1;
    }
    if(n==1){
      return 2;

    }
    return countStrings(n-1) + countStrings(n-2);
}
//usinng dp
int countStrings(int n)
{
    int a[n], b[n];
    a[0] = b[0] = 1;
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i-1] + b[i-1];
        b[i] = a[i-1];
    }
    return (a[n-1] + b[n-1])%1000000007;
}

int main()
{
    cout << countStrings(3) << endl;
    return 0;
}




 
 
