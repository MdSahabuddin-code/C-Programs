// S=2-4+6-8+10..........n
#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
    {
        if (i % 4 == 0)
            sum = sum - i;
        else
            sum = sum + i;
    }
    printf("Sum = %d \n", sum);
    return 0;
}