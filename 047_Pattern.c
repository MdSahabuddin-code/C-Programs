/*
A B C D E
B C D E
C D E
D E
E
*/
#include <stdio.h>
void main()
{
    int i, j;
    char ch='A';
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch+j-1);
        }
        ch++;
        printf("\n");
    }
}