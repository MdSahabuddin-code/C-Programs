/*
E
D D
C C C
B B B B
A A A A A
*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j <= 5; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }
    return 0;
}