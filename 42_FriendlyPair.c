#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the First number : \t\n");
    scanf("%d", &num1);
    printf("Enter the Second number : \t\n");
    scanf("%d", &num2);
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i < num1; i++)
    {
        if (num1 % i == 0)
        {
            sum1 = sum1 + i;
        }
    }
    for (int i = 1; i < num2; i++)
    {
        if (num2 % i == 0)
        {
            sum2 = sum2 + i;
        }
    }
    if (sum1 == num1 && sum2 == num2)
        printf("It is Friendly Pair\n");
    else
        printf("It is Not Friendly Pair\n");
    return 0;
}