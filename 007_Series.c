// S=1-2+3-4+5-6...........n
#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    printf("Sum = %d \n", sum);
    return 0;
}