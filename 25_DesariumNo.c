#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    int num1 = num, c = 0;
    while (num1 != 0)
    {
        num1 /= 10;
        c++;
    }
    num1 = num;
    int sum = 0;
    while (num1 != 0)
    {
        int rem = num1 % 10;
        sum += pow(rem, c);
        num1 /= 10;
        c--;
    }
    if (sum == num)
        printf("It is a Disarium Number.\n");
    else
        printf("It is not a Disarium Number.\n");
}