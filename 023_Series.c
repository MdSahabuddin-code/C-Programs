//S=1/2+2/3+3/4+4/5+5/6.....n
#include <stdio.h>
int main()
{
    int i, n;
    double sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (double)(i / (i + 1));
    }
    printf("sum=%lf \n", sum);
    return 0;
}