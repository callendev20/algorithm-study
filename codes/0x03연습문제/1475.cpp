#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   int num, d[10] = {}, max = 0;
   cin >> num;

   while (num > 0)
   {
      d[num % 10]++;
      num /= 10;
   }

   for (int i = 0; i < 9; i++)
   {
      if (i == 6)
      {
         if ((d[6] + d[9]) / 2.0 > max)
            max = ceil((d[6] + d[9]) / 2.0);
      }
      else if (d[i] > max)
         max = d[i];
   }
   cout << max;
}