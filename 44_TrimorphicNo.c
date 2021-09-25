#include <stdio.h>
#include <math.h> 
int main()
{
    int num, cube, temp, last;
    int n =0;
    printf("Enter a number \n");
    scanf("%d",&num);
    cube = num*num*num;  //calculating square of num
    temp = num;
    //Counting number of digits
    while(temp>0)
    {
        n++;
        temp = temp/10;
    }
    //Extracting last n digits
    int den = (pow(10,n));
    last = cube % den;
    if(last == num)
        printf("Trimorphic number \n");
    else
        printf("Not Trimorphic \n");
    return 0;
}