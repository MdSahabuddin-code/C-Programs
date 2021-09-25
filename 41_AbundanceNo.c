#include <stdio.h>
int isFactors(int num);
int main()
{
    int n, sum = 0;
    printf("Enter the number to check for Abundant no\n");
    scanf("%d", &n);
    if (n < isFactors(n))
    {
        printf("The Number %d is Abundant no\n", n);
    }
    else
    {
        printf("The Number %d is Abundant No\n", n);
    }
    return 0;
}
int isFactors(int num)
{
    int i,sum=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
    return sum;
}