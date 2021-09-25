#include<stdio.h>
int main()
{
	int n,a,temp,sum=0,product=1;
	printf("Enter the Number to check for Spy no\n");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		temp=a%10;
		sum=sum+temp;
		product=product*temp;
		a=a/10;
	}
	if(sum==product)
		printf("The Product and sum of digit of a number %d is Spy No\n",n);
	else
		printf("The Product and sum of digit of a number %d is not Spy No\n",n);
	return 0;
}
