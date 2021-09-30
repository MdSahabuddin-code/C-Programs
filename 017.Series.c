//S=1/2-2/4+3/6-4/8.....n
#include <stdio.h>
int main()
{
    int i, n;
    double sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
    {
        if (i % 2 == 0)
            sum = sum - (double)(i / (i * 2));
        else
            sum = sum + (double)(i / (i * 2));
    }
    printf("Sum = %lf \n", sum);
    return 0;
}