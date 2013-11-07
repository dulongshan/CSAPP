#include <stdio.h>
#include <limits.h>

int uadd_ok(unsigned, unsigned);

int main()
{
	unsigned x1 = UINT_MAX - 100;
	unsigned y1 = 200;
	unsigned y2 = 10;
	printf("uadd_ok(UINT_MAX-100, 200) = %d\t", uadd_ok(x1, y1));
	printf("uadd_ok(UINT_MAX-100, 10) = %d\n", uadd_ok(x1, y2));
	return 0;
}

int uadd_ok(unsigned x, unsigned y)
{
	unsigned u = x + y;
	return (u > x);
}
