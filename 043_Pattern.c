/*
        A
      B A B
    C B A B C
  D C B A B C D
E D C B A B C D E
*/
#include <stdio.h>
int main()
{
    int i, j;
    char CH = 'A';
    int space = 4;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf("  ");
        }
        //first part of the row
        for (j = CH; j >= 'A'; j--)
        {
            printf("%c ", j);
        }
        //second part of the row
        for (j = 'B'; j <= CH; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
        CH++;
        space--;
    }
    return 0;
}