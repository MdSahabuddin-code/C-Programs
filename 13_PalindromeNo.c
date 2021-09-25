#include<stdio.h>
int main()
{
	int n,a,t,result=0;
	printf("Enter the Number to check for Palindrome No\n");
	scanf("%d",&n);
	a=n;
	while (a!=0)
	{
		t=a%10;
		result=(result*10)+t;
		a=a/10;
	}
	if(result==n)
		printf("The number %d is Palindrome No\n",n);
	else
		printf("The Number %d is not Palindrome no\n",n);
	return 0;
}
