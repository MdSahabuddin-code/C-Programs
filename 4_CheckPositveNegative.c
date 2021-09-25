#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number to check whether No. is Positive Or Negative\n");
	scanf("%d",&n);
	if(n>0)
	{
		printf(" The Number %d is Positive Number\n",n);
	}
	else if(n<0)
	{
		printf(" The Number %d is Negative Number\n",n);
	}
	else
	{
		printf(" The Number %d is Neutral Number\n",n);
	}
	return 0;
}
