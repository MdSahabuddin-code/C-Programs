// Sum = 1 + 2 + 3 + 5 + 6..........n..........+ 6 + 5 + 4 + 3 + 2 + 1
#include <stdio.h>
int main()
{
    int i, sum1 = 0, sum2 = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum1 = sum1 + i;
    }
    for (i = n - 1; i >= 1; i--)
    {
        sum2 = sum2 + i;
    }
    printf("Sum = %d \n", sum1 + sum2);
    return 0;
}