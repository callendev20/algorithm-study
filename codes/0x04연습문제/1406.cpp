#include <bits/stdc++.h>

using namespace std;
int main()
{
   ios::sync_with_stdio(0);
   // cin.tie(0);
   string str, command;
   int n;
   cin >> str >> n;
   vector<char> v(str.begin(), str.end());
   // cout << *str.begin() << ", " << *str.end() << "\n";
   vector<char>::iterator cursor = v.end();
   while (n-- > 0)
   {
      cin >> command;
      if (!command.compare("L") && cursor != v.begin())
         cursor--;
      else if (!command.compare("D") && cursor != v.end())
         cursor++;
      else if (!command.compare("B"))
      {
         if (cursor == v.begin())
            continue;
         v.erase(cursor - 1);
      }
      else
      {
         v.insert(cursor, *(command.end() - 1));
         cout << *(command.end() - 1);
         cursor++;
      }
   }
   string ret(v.begin(), v.end());
   cout << ret;
}