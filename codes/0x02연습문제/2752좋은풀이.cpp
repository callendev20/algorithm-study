#include <stdio.h>
#define f(a, b, t) ((a > b) ? t = b, b = a, a = t : 1)
int main()
{
   int a, b, c, t;
   scanf("%d%d%d", &a, &b, &c);
   f(a, b, t);
   f(b, c, t);
   f(a, b, t);
   printf("%d %d %d", a, b, c);
}