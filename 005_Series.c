// S = 2+4+6+8+10...........n
#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i+=2)
    {
        sum = sum + i;
    }
    printf("sum=%d \n", sum);
    return 0;
}