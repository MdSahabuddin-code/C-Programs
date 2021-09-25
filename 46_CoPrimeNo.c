#include<stdio.h>
int prime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int num1,num2;
    printf("Enter the first Number: \t");
    scanf("%d",&num1);
    printf("Enter the second number: \t");
    scanf("%d",&num2);
    if(prime(num1)==1&&prime(num2)==1)
    {
        printf("%d and %d are Co Prime No\n",num1,num2);
    }
    else
    {
        printf("%d and %d are not Co Prime No\n",num1,num2);
    }
}