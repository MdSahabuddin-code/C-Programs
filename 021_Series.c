//S=2+4+8+16+32.....n
#include <stdio.h>
int main()
{
    int i, j, sum = 0, temp = 1, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum = sum + temp;
        temp=temp*2;
    }
    printf("sum=%d \n", sum);
    return 0;
}