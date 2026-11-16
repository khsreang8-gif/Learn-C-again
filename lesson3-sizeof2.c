#include <stdio.h>

int main(void)
{
	int number = 100;
	
	printf("Value = %d\n", number);
	printf("Size = %zu\n", sizeof(number));
	
	number = 200;
	
	printf("New value = %d\n", number);
	printf("Size = %zu bytes\n", sizeof(number));
	
	return 0;
}
