/*
15
14 13
12 11 10 
9 8 7 6 
5 4 3 2 1
*/
#include<stdio.h>
int main()
{
    int i, j, c=15;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d ", c--);
        printf("\n");
    }
    return 0;
}