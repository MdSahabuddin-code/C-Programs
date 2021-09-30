//S=n.....5+4+3+2+1
#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        sum = sum + i;
    }
    printf("Sum = %d \n", sum);
    return 0;
}