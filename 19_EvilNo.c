#include<stdio.h>
void IsEvil(int number);
int main()
{
	int n,num,B=0,rem,base=1;
	printf("Enter an Integer number : \n");
	scanf("%d",&n);
	num = n;
	while (n > 0)
	{
		rem = n % 2;
		B = B + rem * base;
		base = base * 10;
    	        n = n / 2;
	}
	printf("Binary representation of %d is : %d\n",num,B);
	IsEvil(B);
	return 0;
}
void IsEvil(int number)
{
	int count=0,r;
	while(number > 0)
	{
		r = number % 2;
		if (r == 1)
	        {
		        count = count + 1;
	        }
	        number = number / 10;
	}
	printf("Number of 1's  = %d\n",count);
	if (count % 2 == 0)
	{
		printf("The number you entered is an EVIL number.\n");
	}
	else
	{
        	printf("\nThe number you entered is NOT an EVIL number.\n");
	}
}
