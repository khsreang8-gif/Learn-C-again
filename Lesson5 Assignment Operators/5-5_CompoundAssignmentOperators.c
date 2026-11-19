#include<stdio.h>

int main(void)
{
	int x = 23;
	
	x %= 5;
	x += 4;
	x *= 2;
	
	printf("%d\n", x);
	
	return 0;
}
