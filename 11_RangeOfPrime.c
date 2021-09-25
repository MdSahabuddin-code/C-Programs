#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the Range for to print Prime Number\n");
	scanf("%d",&n);
	printf("Prime Number in between 1 to %d is.....\n",n);
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		else 
		{
			printf("%d ",i);
		}
	}
	return 0;
}

