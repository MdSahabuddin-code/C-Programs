/*
E E E E E
D D D D
C C C
B B 
A
*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }
    return 0;
}