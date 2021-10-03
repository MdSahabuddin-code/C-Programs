#include <stdio.h>
#include <stdbool.h>
bool isValidNumber(int n, int d)
{
    int digit = n % 10;
    int sum = digit;
    if (digit == d)
        return false;
    n /= 10;
    while (n)
    {
        digit = n % 10;
        if (digit == d || digit <= sum)
        {
            return false;
        }
        else
        {
            sum += digit;
            n /= 10;
        }
    }
    return 1;
}
void printGoodNumberLtoR(int L, int R, int d)
{
    for (int i = L; i <= R; i++)
    {
        if (isValidNumber(i, d))
            printf("%d ", i);
    }
    printf("\n");
}
int main()
{
    int L, R, d;
    printf("Enter the number for Starting Range of Good number: ");
    scanf("%d", &L);
    printf("Enter the number for Ending Range of Good number: ");
    scanf("%d", &R);
    printf("Enter the number that do not present in Good number: ");
    scanf("%d", &d);
    printf("All the Good Numer from %d to %d that do not contain %d are : \t", L, R, d);
    printGoodNumberLtoR(L, R, d);
}