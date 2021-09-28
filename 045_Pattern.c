/*
A
A B C
A B C D E 
A B C D E F G
A B C D E F G I
*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= (i * 2 - 1); j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
}