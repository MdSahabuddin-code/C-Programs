//S=2+4+8+16+.............n
#include <stdio.h>
#include<math.h>
//int power(int n,int i);
int main()
{
    int i, sum = 1, n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Sum of given series : ");
    for (i = 1; i <= n; i++)
    {
        sum = sum * 2;
        printf("%d  ",sum);
    }
    printf("\nSum=%d \n", sum);
    return 0;
}