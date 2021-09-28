/*
a
B c
D e F
g H i J
k L m N o
*/
#include <stdio.h>
void main()
{
    int i, j;
    char k1 = 'a', k2 = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (k1 % 2 == 0 && k2 % 2 == 0)
            {
                printf("%c ", k2);
            }
            else
            {
                printf("%c ", k1);
            }
            k1++;
            k2++;
        }
        printf("\n");
    }
}