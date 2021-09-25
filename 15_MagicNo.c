#include<stdio.h>
int main()
{
	int n,result=0,t;
	printf("Enter the number to check for Magic No. the should be n>10\n");
	scanf("%d",&n);
	while (n>=10)
	{
		while (n>0)
		{
			t=n%10;
			result=result+t;
			n=n/10;
		}
		n=result;
		result=0;
	}
	if(n==1)
		printf("Number is Magic No.\n");
	else
		printf("Number is not Magic No.\n");
	return 0;
}
