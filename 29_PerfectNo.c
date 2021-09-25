#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number to check for Perfect No.\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
        printf("The number %d is Perfect No\n",n);
    else
        printf("The number %d is not Perfect No\n",n);
    return 0;
}