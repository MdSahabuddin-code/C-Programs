// S =1!+2!+3!+4!........n!
#include <stdio.h>
int fact(int num);
int main()
{
    int i, sum = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + fact(i);
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