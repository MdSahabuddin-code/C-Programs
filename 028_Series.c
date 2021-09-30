//S=1+x+x^2+x^3...................n
#include <stdio.h>
#include <math.h>
int main()
{
    int i, sum = 1, n, x;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Enter the Value of x : ");
    scanf("%d", &x);
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(x, i);
    }
    printf("sum=%d \n", sum);
    return 0;
}