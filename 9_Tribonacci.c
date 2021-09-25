#include<stdio.h>
int main()
{
	int n,i,f1,f2,f3,f4;
	printf("Enter the term to print 'TRIBONACCI SERIES' : \n");
	scanf("%d",&n);
	printf(" The Tribonacci Series is : ");
	f1=0;
	f2=0;
	f3=1;
	printf("%d  ",f1);
	printf("%d  ",f2);
	printf("%d  ",f3);
	for(i=0;i<(n-3);i++)
	{
		f4=f1+f2+f3;
		printf("%d  ",f4);
		f1=f2;
		f2=f3;
		f3=f4;
	}
	printf("\n");
	return 0;
}
