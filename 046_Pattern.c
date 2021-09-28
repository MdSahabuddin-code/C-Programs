/*
E F G H I
D E F G
C D E 
B A
A
*/
#include <stdio.h>
void main()
{
    int i, j;
    char ch = 'A';
    for (i = 5; i >= 1; i--)
    {
        ch = ch + i - 1;
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch++);
        }
        ch = 'A';
        printf("\n");
    }
}
