/*
1 A 2 B 3 C 4 D 5 E
1 A 2 B 3 C 4 D
1 A 2 B 3 C
1 A 2 B
1 A
*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d %c ", j, 'A' + j - 1);
        }
        printf("\n");
    }
}