/*
A
B C
D E F
G H I J
K L M N O
*/
#include <stdio.h>
int main()
{
    int i, j;
    char ch=65;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%c ", ch++);
        printf("\n");
    }
    return 0;
}