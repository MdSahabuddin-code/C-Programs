//S=1^1+2^2+3^3+4^4.....n
#include <stdio.h>
int power(int n)
{
    int p=1,i;
    for(i=1;i<=n;i++)
    {
        p=p*n;
    }
    return p;
}
int main()
{
    int i, sum = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + power(i);
    }
    printf("sum=%d \n", sum);
    return 0;
}
