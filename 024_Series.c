//S=1/2+2/6+3/8+4/10+5/12.....n
#include <stdio.h>
int main()
{
    int i, n;
    double sum = 1 / 2;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        sum = sum + (double)(i / ((i + 1) * 3));
    }
    printf("sum=%lf \n", sum);
    return 0;
}