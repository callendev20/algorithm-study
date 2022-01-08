#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n, tmp, x, occur[1000001] = {}, nums[100000] = {}, ret = 0;

   cin >> n;
   for (int i = 0; i < n; i++)
   {
      cin >> tmp;
      occur[tmp]++;
      nums[i] = tmp;
   }
   cin >> x;
   for (int i = 0; i < n; i++)
   {
      if ((x - nums[i]) < 0 || (x - nums[i]) > 1000000)
      {
         continue;
      }
      else if (nums[i] * 2 == x)
      {
         if (occur[nums[i]] >= 2)
         {
            occur[nums[i]] = 0;
            ret++;
         }
      }
      else
      {
         if (occur[x - nums[i]] != 0 && occur[nums[i]] != 0)
         {
            occur[x - nums[i]] = 0;
            occur[nums[i]] = 0;
            ret++;
         }
      }
   }
   cout << ret;
}