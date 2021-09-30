//sum=1+n^2/1!+n^3/2!+n^4/3!...........n
#include <stdio.h>
#include <math.h>
int fact(int num);
int main()
{
    int i, sum = 1, n,a;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Enter the number  to power : ");
    scanf("%d", &a);
    for (i = 1; i <= n; i++)
    {
        sum = sum +pow(a,(i+1))/ fact(i);
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