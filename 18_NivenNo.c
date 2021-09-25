#include<stdio.h>
int main()
{
	int n,temp,sum=0,a;
	printf("Enter the number to check for Niven Or Harshad No.\n");
	scanf("%d",&n);
	a=n;
	while(a!=0)
	{
		temp=a%10;
		sum=sum+temp;
		a=a/10;
	}
	if(n%sum==0)
		printf("The number %d is Niven Or Harshad No\n",n);
	else
		printf("The number %d is not Niven Or Harshad No\n",n);
	return 0;
}
