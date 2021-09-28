/*
A
1 1 
B B B 
2 2 2 2
C C C C C
*/
#include <stdio.h>
void main()
{
    int i,j,n,a=1;
    char c='A';
    printf("Enter the number : \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d ",a);
            }
            else
            {
                printf("%c ",c);
            }
        }
        if(i%2==0)
            c++;
        else
            a++;
        printf("\n");
    }
}