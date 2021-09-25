#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the Number to check whether its PerfectSquare Or not\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (n == i * i)
        {
            printf("The Number %d is a PerfectSquare No \n", n);
            return 0;
        }
    }
    printf("The Number %d is not the PerfectSquare No \n", n);
    return 0;
}