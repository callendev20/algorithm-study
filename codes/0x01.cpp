
#include <bits/stdc++.h>

using namespace std;

int func1(int N);
int func2(int arr[], int N);
int func3(int N);
int func4(int N);

int main()
{
   // cout << func1(16) << "\n";
   // cout << func1(34567) << "\n";
   // cout << func1(27639) << "\n";
   // int arr1[] = {1, 52, 48};
   // int arr2[] = {50, 42};
   // int arr3[] = {4, 13, 63, 87};
   // cout << func2(arr1, 3) << "\n";
   // cout << func2(arr2, 2) << "\n";
   // cout << func2(arr3, 4) << "\n";
   // cout << func3(9) << "\n";
   // cout << func3(693953651) << "\n";
   // cout << func3(756580036) << "\n";
   cout << func4(5) << "\n";
   cout << func4(97615282) << "\n";
   cout << func4(1024) << "\n";
   return 0;
}

// 7N+3 , O(N)

int func1(int N)
{
   int ret = 0;
   for (int i = 1; i <= N; i++)
   {
      if (i % 3 == 0 || i % 5 == 0)
         ret += i;
   }
   return ret;
}

int func2(int arr[], int N)
{
   int n;
   if (N % 2 == 1)
      n = N / 2 + 1;
   else
      n = N / 2;
   for (int i = 0; i < n; i++)
   {
      for (int j = i + 1; j < N; j++)
      {
         if (arr[i] + arr[j] == 100)
            return 1;
      }
   }
   return 0;
}

int func3(int N)
{
   int s = sqrt(N);
   if (s * s == N)
      return 1;
   else
      return 0;
}

int func4(int N)
{
   return pow(2, trunc(log2(N)));
}