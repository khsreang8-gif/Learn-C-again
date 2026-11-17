#include <stdio.h>

int main(void)
{
	int age = 20;
	float height = 1.75f;
	double price = 19.99;
	char grade = 'A';
	
	printf("int: %zu bytes\n", sizeof(int));
	printf("float: %zu bytes\n", sizeof(float));
	printf("double: %zu bytes\n", sizeof(double));
	printf("char: %zu bytes\n", sizeof(char));
	
	return 0;
	
}			
