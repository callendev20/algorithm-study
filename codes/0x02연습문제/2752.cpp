#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n[3], temp;
   cin >> n[0] >> n[1] >> n[2];
   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         if (n[j] > n[j + 1])
         {
            temp = n[j + 1];
            n[j + 1] = n[j];
            n[j] = temp;
         }
      }
   }
   cout << n[0] << " " << n[1] << " " << n[2];
}
