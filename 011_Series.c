//S=1/2+1/3+1/4+1/5.............1/n
#include <stdio.h>
int main()
{
    int n;
    float i,sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        sum = sum + 1/i;
    }
    printf("Sum = %f \n", sum);
    return 0;
}