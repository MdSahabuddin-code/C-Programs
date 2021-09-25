#include<stdio.h>
int isFactorial(int num);
int main()
{
    int n,a,temp,sum=0;
    printf("Enter the number to chech for Strong Number\n");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        temp=a%10;
        sum=sum+isFactorial(temp);
        a=a/10;
    }
    if(n==sum)
        printf("The Number %d is Strong No\n",n);
    else
        printf("The Number %d is Strong No\n",n);
    return 0;
}
int isFactorial(int num)
{
    int i,f=1;
    for(i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}