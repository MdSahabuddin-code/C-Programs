//S=2+6+10+14+18+22.....n
#include <stdio.h>
int main()
{
    int i, sum = 2, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        sum = sum + (i+4);
    }
    printf("sum=%d \n", sum);
    return 0;
}