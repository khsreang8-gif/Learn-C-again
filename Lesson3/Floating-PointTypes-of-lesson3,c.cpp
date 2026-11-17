#include <stdio.h>
#include <float.h>

int main(void)
{
	printf("Float size = %zu bytes\n", sizeof(float));
	printf("Double size = %zu bytes\n", sizeof(double));
	
	printf("Float precision = %d digits\n", FLT_DIG);
	printf("Double precision = %d digits\n", DBL_DIG);
	
	printf("Float Max = %e\n", (double) FLT_MAX);
	printf("Double Max = %e\n", (float) DBL_MAX);
	
	return 0;
}
