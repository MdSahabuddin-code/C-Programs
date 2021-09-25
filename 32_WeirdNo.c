#include<stdio.h>
int fact(int n)
{
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        if(n%i==0)
            sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number to check for Weird No\n");
    scanf("%d",&n);
    if(fact(n)>n)
        printf("The Number %d is weird\n",n);
    else
        printf("The Number %d is not weird\n",n);
    return 0;
}