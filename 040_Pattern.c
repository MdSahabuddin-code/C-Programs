/*
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/
#include <stdio.h>
int main()
{
    int i, j, k, s;
    for (i = 1; i <= 5; i++)
    {
        for (s = 1; s <= 5 - i; s++)
            printf("  ");
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        for (k = 1; k <= i - 1; k++)
        {
            printf("%c ", 'A' + k - 1);
        }
        printf("\n");
    }
    return 0;
}