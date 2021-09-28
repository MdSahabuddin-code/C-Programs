/*
-------------------
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
--------------------
*/
#include <stdio.h>
int main()
{
    int i, j, k, s;
    for (i = 1; i <= 5; i++)
    {
        for (s = 4; s >= i; s--)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("* ");
        for (k = i - 1; k >= 1; k--)
            printf("* ");
        printf("\n");
    }
    return 0;
}