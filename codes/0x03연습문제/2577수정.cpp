#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int A, B, C;
   cin >> A >> B >> C;
   int d[10] = {0};
   int p = A * B * C;
   while (p > 0)
   {
      d[p % 10] += 1;
      p /= 10;
   }
   for (int i = 0; i < 10; i++)
      cout << d[i] << "\n";
}