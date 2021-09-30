//S=1/2-1/4+1/6-1/8+1/10.....n
#include <stdio.h>
int main()
{
    int i, n;double sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i+=2)
    {
        if (i % 4 == 0)
            sum = sum - (double)(1/i);
        else
            sum = sum + (double)(1/i);
    }
    printf("Sum = %lf \n", sum);
    return 0;
}