#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   // 여기서 max를 0으로 초기화시켜두었었다.
   // 그런데, num 이 0 으로 주어졌을 때 max는 0이 되므로 틀린 케이스가 생긴다.
   // 그러므로 max를 1으로 초기화 시켜주면, 이런 문제가 해결된다.
   int num, d[10] = {}, ret = 1;
   cin >> num;

   while (num > 0)
   {
      d[num % 10]++;
      num /= 10;
   }

   for (int i = 0; i < 9; i++)
   {
      if (i == 6)
         // 여기서 max의 두번째 인수는 int형이어야 한다.
         // 그런데, ceil함수는 float을 반환한다. 그래서 int로 강제 형변환한 모습.
         // (d[6] + d[9] + 1) / 2 로 하여 간단하게 정수로 반환하는 방법도 있다.
         ret = max(ret, (int)ceil((d[6] + d[9]) / 2.0));
      else
         ret = max(ret, d[i]);
   }
   cout << ret;
}