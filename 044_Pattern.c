/*
A
B F
C G J
D H K M
E I L N O
*/
#include <stdio.h>
void main()
{
    int i, j, diff, value, n = 5;
    for (i = 1; i <= n; i++)
    {
        diff = n - 1;
        value = i;
        for (j = 1; j <= i; j++)
        {
            printf("%c ", (char)(value + 64));
            value = value + diff;
            diff--;
        }
        printf("\n");
    }
}