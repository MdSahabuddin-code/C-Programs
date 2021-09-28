/*
E
D E
C D E
B C D E 
A B C D E
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    n = 5 - 1;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%c ",'A' + j-1);
        }
        printf("\n");
    }
}