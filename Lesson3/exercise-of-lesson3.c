#include <stdio.h>

int main(void)
{
	int x = 10;
	x = 500;
	
	printf("%d\n", x);
	printf("%zu\n", sizeof(x));
	
	return 0;	
}
