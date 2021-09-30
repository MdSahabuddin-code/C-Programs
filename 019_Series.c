//S=1+(1*2)+2+(1*2*3).....n
#include <stdio.h>
int main()
{
    int i, j, sum = 0, temp = 1, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            temp = temp * i;
        }
        sum = sum + i + temp;
    }
    printf("sum=%d \n", sum);
    return 0;
}