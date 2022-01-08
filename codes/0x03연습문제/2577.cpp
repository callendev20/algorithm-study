#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);
   int usage[10] = {};
   int A, B, C;
   cin >> A >> B >> C;
   string product = to_string(A * B * C);
   for (int i = 0; i < product.length(); i++)
      usage[product[i] - 48] += 1;
   for (int i = 0; i < 10; i++)
      cout << usage[i] << "\n";
}