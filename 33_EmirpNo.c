#include <stdio.h>
int prime(int num);
int main()
{
    int n, a, temp, rev = 0, p1, p2;
    printf("Enter the Number to check for Emirp NO\n");
    scanf("%d", &n);
    a = n;
    p1 = prime(n);
    while (a != 0)
    {
        temp = a % 10;
        rev = (rev * 10) + temp;
        a = a / 10;
    }
    p2 = prime(rev);
    if (p1 == p2)
    {
        printf("The Number %d and its Reverse %d both are PRIME NO\n", n, rev);
        printf("\t\tIt is ''EMIRP NO''\n");
    }
    else
    {
        printf("The Number %d and its Reverse %d both are PRIME NO\n", n, rev);
        printf("\t\tIt is not an''EMIRP NO''\n");
    }
    return 0;
}
int prime(int num)
{
    int i;
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
            return 0;
        else
            return 1;
    }
}
