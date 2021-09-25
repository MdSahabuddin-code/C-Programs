#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number to Check for Odd Or Even \n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Number %d is EVEN Number \n",n);
	}
	else
	{
		printf("Number %d is Odd Number \n",n);
	}
	return 0;
}
