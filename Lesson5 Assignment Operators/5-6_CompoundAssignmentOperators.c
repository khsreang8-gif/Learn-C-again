#include<stdio.h>

int main(void)
{
	int x = 25;
	
	x += 15;
	x /= 4;
	x *= 3;
	x -= 7;
	x %= 6;
	
	printf("%d\n", x); 
	
	return 0;
}
