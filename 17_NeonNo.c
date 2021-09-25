#include<stdio.h>
int main()
{
	int n,temp,sum=0,a,sq;
	printf("Enter the number to check for Neon number\n");
	scanf("%d",&n);
	sq=n*n;
	a=sq;
	while(a!=0)
	{
		temp=a%10;
		sum=sum+temp;
		a=a/10;
	}
	if(n==sum)
		printf("The Number %d is Neon Number\n",n);
	else
		printf("The Number %d is not Neon Number\n",n);
	return 0;
}
