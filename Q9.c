#include <stdio.h>
int main()
{
  int out, in;
  printf("Enter the row size:");
  int n;
  scanf("%d", &n);

  int x = 1;
  int y = n * 2 - 1;

  for (out = n; out >= 1; out--)
  {
    for (in = 1; in <= n * 2; in++)
    {
      if (in == x || in == y)
      {
        printf("%c", out + 64);
      }
      else
      {
        printf(" ");
      }
    }
    x++;
    y--;
    printf("\n");
  }
}