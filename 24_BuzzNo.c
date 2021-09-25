#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to check for Buzz n  \n");
    scanf("%d",&n);
    if(n%10==7||n%7==0)
        printf("The number %d is BUZZ no\n",n);
    else
        printf("The number %d is not BUZZ no\n",n);
}