#include <stdio.h>
int main()
{
    int n, no, r, flg;
    flg = 0;
    printf("\n\n Check whether a number is a Duck Number or not: \n");
    printf(" ----------------------------------------------------\n");
    printf(" Input a number: ");
    scanf("%d", &n);
    no = n;
    while (no > 0)
    {
        if (no % 10 == 0)
        {
            flg = 1;
            break;
        }
        no /= 10;
    }
    if (n > 0 && flg == 1)
    {
        printf(" The given number is a Duck Number.\n");
    }
    else
    {
        printf(" The given number is not a Duck Number.\n");
    }
}