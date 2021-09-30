//S=1/1+2/8+3/27+5/125.....n
#include <stdio.h>
int main()
{
    int i, n;
    double sum;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (double)(i/(i*i*i));
    }
    printf("sum=%lf \n", sum);
    return 0;
}