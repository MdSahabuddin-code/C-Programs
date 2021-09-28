/*
A
A B
A B C
A B C D
A B C D E
*/
#include <stdio.h>
void main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        ch='A';
        printf("\n");
    }
}