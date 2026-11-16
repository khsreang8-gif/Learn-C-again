#include<stdio.h>

int main(void)
{
	int a = 20;
	int b = 6;
	
	int x = a / b + 2 * 3;
	int y = (a + b) % 5;
	int z = x - y;
	
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);
	
	return 0;
}
