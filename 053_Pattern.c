/*
        C
       CO
      COM
     COMP
    COMPU
   COMPUT
  COMPUTE
 COMPUTER
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s[] = "COMPUTER";
    int i, j, sp;
    int l = strlen(s);
    for (i = 0; i < l; i++)
    {
        for (sp = 1; sp <= l - i; sp++)
            printf(" ");
        for (j = 0; j <= i; j++)
            printf("%c", s[j]);
        printf("\n");
    }
}