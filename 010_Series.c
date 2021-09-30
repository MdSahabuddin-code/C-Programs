//S=1!+2!+3!+4!+5!+......n........+5!+4!+3!+2!+1!
#include <stdio.h>
int fact(int num)
{
    int i, f = 1;
    for (i = 1; i <= num; i++)
    {
        f = f * i;
    }
    return f;
}
void main()
{
    int i, sum1 = 0, sum2 = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum1 = sum1 + fact(i);
    }
    for (i = n - 1; i >= 1; i--)
    {
        sum2 = sum2 + fact(i);
    }
    printf("Sum = %d \n", sum1 + sum2);
}