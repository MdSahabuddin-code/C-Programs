#include<stdio.h>
#include<math.h>

int main()
{
	int n,a,t,d=0,result=0;
	printf("Enter the number to check Armstrong No. \n");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		a=a/10;
		d++;
	}
	a=n;
	while(a!=0)
	{
		t=a%10;
		result=result+ pow(t,d);
		a=a/10;
	}
	if(result==n)
		printf("The Number %d is Armstrong no\n",n);
	else
		printf("The Number %d is not Armstrong no\n",n);
	return 0;
}
