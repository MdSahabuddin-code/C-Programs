#include <stdio.h>
int main()
{
	int a, b, n, sum;
	printf("Enter '1' for addition, '2' for substraction, '3' for multiplication, '4' for division\n");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("Enter the Two Number for Addition\n");
		scanf("%d %d", &a, &b);
		sum = a + b;
		printf("Adddition of %d and %d is : %d\n", a, b, sum);
		break;
	case 2:
		printf("Enter the Two Number for Substraction\n");
		scanf("%d %d", &a, &b);
		sum = a - b;
		printf("Substraction of %d and %d is : %d\n", a, b, sum);
		break;
	case 3:
		printf("Enter the Two Number for Multiplication\n");
		scanf("%d %d", &a, &b);
		sum = a * b;
		printf("Multiplication of %d and %d is : %d\n", a, b, sum);
		break;
	case 4:
		printf("Enter the Two Number for Division\n");
		scanf("%d %d", &a, &b);
		sum = a / b;
		printf("Division of %d and %d is : %d\n", a, b, sum);
		break;
	default:
		printf("Wrong Input\n");
		break;
	}
	return 0;
}