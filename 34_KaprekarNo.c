#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool chkkaprekar(int n)
{
    if (n == 1)
        return true;
    int sqr_n = n * n;//squaring number example 45*45=2025
    int ctr_digits = 0;
    while (sqr_n)
    {
        ctr_digits++;//calculating digit of 2025
        sqr_n /= 10;
    }
    sqr_n = n * n;//again intilising the value for 2025
    for (int r_digits = 1; r_digits < ctr_digits; r_digits++)//loop to run 4 time
    {
        int eq_parts = pow(10, r_digits);//for finding its equal half one by one
        if (eq_parts == n)
            continue;
        int sum = sqr_n / eq_parts + sqr_n % eq_parts;
        if (sum == n)
            return true;
    }
    return false;
}
int main()
{
    int kpno;
    printf("\n\n Check whether a given number is a Kaprekar number: \n");
    printf(" -------------------------------------------------------\n");
    printf(" Input a number: ");
    scanf("%d", &kpno);
    if (chkkaprekar(kpno) == true)
    {
        printf("%d is a Kaprekar number. \n", kpno);
    }
    else
    {
        printf("%d is not a Kaprekar number. \n", kpno);
    }
}