#include <stdio.h>

int main()
{
	int x = 0x45, y = 0x56;
	printf("\"x==y\" = %2x, \"x==x\" = %2x\n", !(x^y), !(x^x));
	return 0;
}
