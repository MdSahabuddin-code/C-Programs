//(1+2)/(2*3)+(2+3)/(3*4)+(3*4)/(4*5)........n
#include <stdio.h>
int main()
{
    int i, n;
    double sum=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (double)(i+(i+1))/((i+1)*(i+2));
    }
    printf("sum=%lf \n", sum);
    return 0;
}