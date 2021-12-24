#include <bits/stdc++.h>

using namespace std;

int main()
{
   cin.tie(0);
   ios::sync_with_stdio(0);
   int len, num, ipt;
   cin >> len >> num;
   // for (int i = 0; i < len; i++)
   // {
   //    cin >> ipt;
   //    if (ipt < num)
   //       cout << ipt << " ";
   // }
   while (len--)
   {
      cin >> ipt;
      if (ipt < num)
         cout << ipt << " ";
   }
}