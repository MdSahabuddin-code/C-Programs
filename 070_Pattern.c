/*
---------------
Enter the number of columns: 7
* * * * * * * 
  * * * * * * 
    * * * * * 
      * * * * 
        * * * 
          * * 
            * 
          * * 
        * * * 
      * * * * 
    * * * * * 
  * * * * * * 
* * * * * * * 
---------------
*/
#include <stdio.h>
int main()
{

    int n;
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n - i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i + 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}