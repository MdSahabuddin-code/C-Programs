//S=1+1/1!+1/2!+1/3!+1/4!+1/5!.......................n
#include <stdio.h>
int fact(int num);
int main()
{
    int i, n;
    double sum = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (double)(1/fact(i));
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