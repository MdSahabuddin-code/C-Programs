/*
--------------------
Input = 5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
--------------------
*/
#include <stdio.h>
void main()
{
    int i, j, n;
    printf("Enter Input for Square '*' pattern : \t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}