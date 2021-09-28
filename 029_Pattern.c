/*
INPUT = 5
--------------------------
A B C D E F G F E D C B A 
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A
--------------------------
*/
#include <stdio.h>
int main()
{
    int n; //5
    char ch;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) //loop for row 5
    {
        ch = 'A';
        for (int j = 0; j <= n - i; j++, ch++) //loop for A to F
        {
            printf("%c ", ch); //print ABCDEF
        }
        if (i == 0) //YES I = 0
        {
            printf("%c ", ch); // PRINT G SO ABCDEFG
        }
        else
        {
            for (int k = 0; k < (2 * i) + 1; k++) //PRINT SPACE
            {
                printf("  ");
            }
        }
        ch--;                                  // G DECREMENTED TO F
        for (int j = 0; j <= n - i; j++, ch--) // LOOP FOR REMAINING
        {
            printf("%c ", ch); //PRINT FEDCBA
        }
        printf("\n"); //NEXT LINE
    }
    return 0;
}