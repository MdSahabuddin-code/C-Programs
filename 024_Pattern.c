/*
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include <stdio.h>
void main()
{
    int i,j,s,c=4;
    for(i=1;i<=5;i++)
    {
        for(s=1;s<=i-1;s++)
            printf("  ");
        for (j=1;j <=5+c ; j++)
        {
            printf("* ");
        }
        c=c-2;
        printf("\n");
    }
}