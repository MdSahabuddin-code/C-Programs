#include<stdio.h>
int reverse(int a);
void main()
{
	int n,result; 
	printf("Enter the Number to be Reversed: ");
	scanf("%d",&n);
	result=reverse(n);
	printf("Reverse of a Number %d is : %d\n",n,result);
}
int r,sum=0;
int reverse(int a)
{
	if(a>0)
	{
		r=a%10;
		sum=sum*10+r;
		reverse(a/10);
	}
	else
	{
		return sum;
	}
	return sum;
}
	
