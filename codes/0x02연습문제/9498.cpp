#include <bits/stdc++.h>

using namespace std;

int main()
{
   cin.tie(0);
   ios::sync_with_stdio(0);
   int sc;
   cin >> sc;
   if (sc < 60)
      cout << "F";
   else if (sc < 70)
      cout << "D";
   else if (sc < 80)
      cout << "C";
   else if (sc < 90)
      cout << "B";
   else
      cout << "A";
}