//S=1-x^2/2!+x^4/4!-x^6/6!+x^8/8!..............n
#include <stdio.h>
#include <math.h>
int fact(int num);
int main()
{
    int i, n, x;
    double sum = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Enter the value of x : ");
    scanf("%d", &x);
    for (i = 2; i <= n; i += 2)
    {
        if (i % 4 == 0)
            sum = sum + (double)(pow(x, i) / fact(i));
        else
            sum = sum - (double)(pow(x, i) / fact(i));
    }
    printf("sum=%lf \n", sum);
    return 0;
}
int fact(int num)
{
    int i, f = 1;
    for (i = 1; i <= num; i++)
    {
        f = f * i;
    }
    return f;
}