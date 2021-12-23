#include <stdio.h>
int main()
{
  int b;
  char d, a;

  printf("Ludzu ievadiet naturalu skaitli: ");
  scanf("%d", &b);

  printf("Binarais skaitlis ir:\n", b);

  for (d = 8; d >= 0; d--)
  {
    a = b >> d;

    if (a & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}
