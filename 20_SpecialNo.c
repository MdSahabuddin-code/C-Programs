#include<stdio.h>
int factorial(int num);
int main()
{
    int n,a,temp,sum=0;
    printf("Enter the Number to check for special no. \n");
    scanf("%d",&n);
    a=n;
    while (a!=0)
    {
        temp=a%10;
        sum=sum+factorial(temp);
        a=a/10;
    }
    if(sum==n)
        printf("The number %d is Special No\n",n);
    else
        printf("The number %d is not Special No\n",n);
    return 0;
}
int factorial(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}