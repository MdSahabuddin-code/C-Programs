// 1^1/1!+2^2/2!+3^3/3!...........n
#include <stdio.h>
int fact(int num);
int power(int num1);
int main()
{
    int i, sum = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum +power(i)/ fact(i);
    }
    printf("sum=%d \n", sum);
    return 0;
}
int fact(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
int power(int num1)
{
    int p=1,i;
    for(i=1;i<=num1;i++)
    {
        p=p*num1;
    }
    return p;
}