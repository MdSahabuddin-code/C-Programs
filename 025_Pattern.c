/*
----------------------PASCAL'S TRIANGLE------------------------------
|-----------------------------|--------------------------------------|  
|           1                 |                  0C0                 |                r!
|         1   1               |               1C0   1C1              |    nCr =------------------  
|       1   2   1             |            2C0   2C1   2C            |           r! - ( n - r )!
|     1   3   3    1          |         3C0   3C1   3C2   3C         |
|   1  4    6   4   1         |      4C0   4C1   4C2   4C3   4C4     |
| 1  5   10   10  5   1       |   5C0   5C1   5C2   5C3   5C4   5C5  |
|-----------------------------|--------------------------------------|  
 */
#include <stdio.h>

int factorial(int n)
{
    int f;
    for (f = 1; n > 1; n--)
        f *= n;
    return f;
}

int ncr(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{
    int n, i, j, c;
    printf("Enter the Number to Print PASCAL'S TRIANGLE : \t");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            c = ncr(i, j);
            printf("%3d ", c);
        }
        printf("\n");
    }
    return 0;
}