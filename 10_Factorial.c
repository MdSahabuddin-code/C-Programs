#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("Enter the Number to find its Factorial : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The Factorial of %d is : %d \n",n,f);
	return 0;
}
