/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
#include <stdio.h>
int main()
{
    int i, j, k, s, c1 = 0, c2 = 0;
    for (i = 1; i <= 5; i++)
    {
        for (s = 4; s >= i; s--)
            printf("  ");
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j + c1);
        }
        c1++;
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d ", k + c2);
        }
        c2++;
        printf("\n");
    }
    return 0;
}