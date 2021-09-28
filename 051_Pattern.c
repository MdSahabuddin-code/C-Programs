/*
        A
      B B B
    C C C C C
  D D D D D D D 
E E E E E E E E E
*/
#include <stdio.h>
void main()
{
    int i, j, k, s;
    char ch = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (s = 1; s <= 5 - i; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
        }
        for (k = 1; k <= i - 1; k++)
        {
            printf("%c ", ch);
        }
        ch++;
        printf("\n");
    }
}