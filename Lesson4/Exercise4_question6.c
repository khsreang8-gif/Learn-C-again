#include<stdio.h>

int main(void)
{
	int a = 19;
	int b = 4;
	
	int x = a / b;
	int y = a % b;
	int z = x + y;
	
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
	
	return 0;
}
