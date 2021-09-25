#include<stdio.h>
int sum(int a);
void main()
{
	int n,result;
	printf("Enter the number of terms to be added : ");
	scanf("%d",&n);
	result=sum(n);
	printf("Sum of all %d Natural number is : %d\n",n,result);
}
int sum(int a)
{
	if(a>0)
		return a+sum(a-1);
	else 
		return 0;
}
