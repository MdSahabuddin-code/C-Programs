#include <stdio.h>
#include <math.h>
int main()
{
    int n, c = 0, a, i,sum, temp;
    printf("Enter the numbber to check for Strange Number: \t");
    scanf("%d", &n);
    a = n;
    while (a != 0)//for finding the length of the square
    {
        a = a / 10;
        c++;
    }
    a = n;//Reintializing value
    i = c - 1;//for size of an Array
    char ch[c];//
    while (a != 0)
    {
        temp = a % 10;
        ch[i] = temp;
        i--;
        a = a / 10;
    }
    int rev = 0, rev1=0;
    int mid = c / 2;
    for (i = 0; i < c; i++) //for array into single digit
    {
        if (mid > i)//checking i is less than the mid pos
        {
            rev = rev * 10 + ch[i];
        }
        else//remaing array element
        {
            rev1 = rev1 * 10 + ch[i];
        }
    }
    sum=pow(((rev+rev1)),2);//finding the perfect square or strange num 2025 = (20+25)^2 = 2025
    if(n == sum)// checking for Strange number
    {
        printf("It is STRANGE NUMBER\n");
    }
    else
    {
        printf("It is not STRANGE NUMBER\n");
    }
    return 0;
}