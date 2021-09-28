/*
Input n = 5
    1     
   121
  12321
 1234321
123454321
*/
#include <stdio.h>
int main()
{
    int i, j, s, k, n;
    printf("Enter the N value to print PYRAMID : \t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (s = (n - 1); s >= i; s--)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        for (k = (i - 1); k >= 1; k--)
            printf("%d", k);
        printf("\n");
    }
    return 0;
}