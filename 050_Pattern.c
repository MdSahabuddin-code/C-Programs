/*
--------------
*
* A 
* A * 
* A * A 
* A * A * 
---------------
*/
#include<stdio.h>
void main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
                printf("A ");
            else
                printf("* ");
        }
        printf("\n");
    }
}