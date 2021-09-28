/*
I 
I N
I N D
I N D I
I N D I A
*/
#include <stdio.h>
void main()
{
    int i, j;
    char s[] = "INDIA";
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", s[j-1]);
        }
        printf("\n");
    }
}