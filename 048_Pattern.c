/*
        A   
      B B
    C C C   
  D D D D
E E E E E
*/
#include <stdio.h>
void main()
{
    int i, j, s;
    for (i = 1; i <= 5; i++)
    {
        for (s = 1; s <= 5 - i; s++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("%c ", 'A' + i - 1);
        printf("\n");
    }
}