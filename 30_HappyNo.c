#include <stdio.h>
//isHappyNumber() will determine whether a number is happy or not
int isHappyNumber(int num)
{
    int temp = 0, sum = 0;
    //Calculates the sum of squares of digits
    while (num > 0)
    {
        temp = num % 10;
        sum = sum + (temp*temp);
        num = num / 10;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter the Number to check for Happy No\n");
    scanf("%d",&num);
    int result = num;
    while (result != 1 && result != 4)
    {
        result = isHappyNumber(result);
    }
    //Happy number always ends with 1
    if (result == 1)
        printf("The Number %d is a happy number\n", num);
    //Unhappy number ends in a cycle of repeating numbers which contains 4
    else if (result == 4)
        printf("The Number %d is not a happy number\n", num);
    return 0;
}