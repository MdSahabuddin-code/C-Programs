//S=x/1!-x^2/2!+x^3/3!-x^4/4!+x^5/5!-x^6/6!..............n
#include <stdio.h>
#include <math.h>
int fact(int num);
int main()
{
    int i, n, x;
    double sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Enter the value of x : ");
    scanf("%d", &x);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - (double)(pow(x, i) / fact(i));
        else
            sum = sum + (double)(pow(x, i) / fact(i));
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