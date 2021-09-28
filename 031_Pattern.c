/*
A A A A A
B B B B
C C C
D D
E
*/
#include <stdio.h>
void main()
{
    int i,j;
    char ch='A';
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
    }
}