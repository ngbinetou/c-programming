#include <stdio.h>
int main()
{
  int a;
  int b;
  int c;

  a = 16;
  b = 2;
  c = 10;
  int choix;

  c += a > 0 && a <= 15 ? ++a : a/b;  

  choix= a > 30 ? b = 11 : (c = 100);

  printf("%d\n",choix);



   return 0;
}
