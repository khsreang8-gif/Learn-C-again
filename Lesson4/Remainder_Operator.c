#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 3;
	
	int quotient = a / b;
	int remainder = a % b;
	
	printf("Quotient = %d\n", quotient);
	printf("Remainder = %d\n", remainder);
	
	return 0;
}
