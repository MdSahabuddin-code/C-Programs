#include<stdio.h>
#include<stdbool.h>
int counter = 2;    //used during recursion
bool isLuckyNumber(int n) {
   if(counter > n)
      return 1;
   if(n%counter == 0)
      return 0;
   
   n -= n/counter;    //n will be next position for recursion
   counter++;
   return isLuckyNumber(n);
}

int main() 
{
   int n;
   printf("Enter the number to check for Lucky Number\n");
   scanf("%d",&n);
   if(isLuckyNumber(n))
      printf("%d is a lucky number.\n",n);
   else
      printf("%d is not a lucky number.\n",n);
}