#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    double root;
    root = sqrt(num + 1);
    if ((int)root == root)
        printf("It is a Sunny Number.\n");
    else
        printf("It is not a Sunny Number.\n");
}