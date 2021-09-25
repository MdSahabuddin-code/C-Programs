#include<stdio.h>
int main()
{
	int n,i,f1,f2,f3;
	printf("Enter the term to print 'FIBONACCI SERIES' : \n");
	scanf("%d",&n);
	printf(" The Fibonacci Series is : ");
	f1=0;
	f2=1;
	printf("%d  ",f1);
	printf("%d  ",f2);
	for(i=0;i<(n-2);i++)
	{
		f3=f1+f2;
		printf("%d  ",f3);
		f1=f2;
		f2=f3;
	}
	printf("\n");
	return 0;
}
