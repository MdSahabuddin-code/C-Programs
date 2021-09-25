#include<stdio.h>
int main()
{
    int r1, r2, number, num1, num2, count = 0;
    printf("Enter the number you want to check: \n");
    //reading a number from the user
    scanf("%d", &number);
    //num1 and num2 are temporary variable
    num1 = number;
    num2 = number;
    //iterate over all digits of the number
    while (num1 > 0)
    {
        //detrmins the last digit of the number
        r1 = num1 % 10;
        while (num2 > 0)
        {
            //finds the last digit
            r2 = num2 % 10;
            //comparing the last digit
            if (r1 == r2)
            {
                //increments the count variable by 1
                count++;
            }
            //removes the last digit from the number
            num2 = num2 / 10;
        }
        //removes the last digit from the number
        num1 = num1 / 10;
    }
    if (count == 1)
    {
        printf("The number is unique.\n");
    }
    else
    {
        printf("The number is not unique.\n");
    }
    return 0;
}