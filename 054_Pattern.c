/*
        R
       ER
      TER
     UTER
    PUTER
   MPUTER
  OMPUTER
 COMPUTER
*/
#include <stdio.h>
#include <string.h>
void main()
{
    char s[] = "COMPUTER";
    int i, j, sp;
    int l = strlen(s);
    for (i = l - 1; i >= 0; i--)
    {
        for (sp = i; sp >= 0; sp--)
            printf(" ");
        for (j = i; j <= l - 1; j++)
            printf("%c", s[j]);
        printf("\n");
    }
}