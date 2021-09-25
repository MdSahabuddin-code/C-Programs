#include <stdio.h>
int main()
{
    int n, c = 0, a, i, temp;
    printf("Enter the numbber to check for Kaprekar Number: \t");
    scanf("%d", &n);//input 45
    a = n * n;//Squaring 45*45=2025
    printf("Square of the Number you Entered is : %d\n", a);
    while (a != 0)//counting length of 2025
    {
        a = a / 10;
        c++;//final value 4
    }
    a = n * n;//reintialing value
    i = c - 1;//for aray loop contion
    int ch[c];
    while (a != 0)
    {
        temp = a % 10;//taking last digit
        ch[i] = temp;//intialing in array
        i--;//reversed intialisig for numbered to enter like 2025 in array not like 5202
        a = a / 10;//removing last digit
    }
    int rev = 0, rev1=0;
    int mid = c / 2;
    for (i = 0; i < c; i++) //for loop to take the value of array and concate into two single digit by position 
    {
        if (mid > i)//checking for positin to split in half
        {
            rev = rev * 10 + ch[i];//storing half of left hand array into single digit
        }
        else
        {
            rev1 = rev1 * 10 + ch[i];//storing the remaining half of right hand array into single digit
        }
    }
    printf("SPLIT of the Number %d%d is %d and %d\n", rev, rev1, rev, rev1);
    int sum = rev + rev1;//sum of both the split num of 2025=>20+25=>45
    if (n == sum)//checking for entered number is Kaprekar no
    {
        printf("The Sum Of the both split %d + %d = %d \n", rev, rev1, sum);
        printf("So It is KAPREKAR NUMBER\n");
    }
    else
    {
        printf("The Sum Of the both split %d + %d != %d \n", rev, rev1, sum);
        printf("So It is not KAPREKAR NUMBER\n");
    }
    return 0;
}