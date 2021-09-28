/*
-------------------
Input = 9
* * * * * * * * *
* *           * *
*   *       *   *
*     *   *     *
*       *       *
*     *   *     *
*   *       *   *
* *           * *
* * * * * * * * *
--------------------
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter the number of rows: \t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j == 1 || j == n || i == n || i == 1 | j == n - i + 1 || i == j)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}