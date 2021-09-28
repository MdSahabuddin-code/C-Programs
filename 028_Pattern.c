/*
Input Rows = 5
--------------------
*                 *
* *             * *
* * *         * * *
* * * *     * * * * 
* * * * * * * * * *
--------------------
*/
#include <stdio.h>
void main()
{
    int i, j, s, k, n;
    printf("Enter the Row : \t");
    scanf("%d", &n);
    int c=n+n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        for (s = 1; s <= c-(i+i); s++)
        {
            printf("  ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}