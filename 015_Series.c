//S=1+(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+5)

#include <stdio.h>
int main()
{
    int i, sum = 1, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (i+(i+1));
    }
    printf("sum=%d \n", sum);
    return 0;
}