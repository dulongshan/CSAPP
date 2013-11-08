#include <stdio.h>
#include <limits.h>

int uadd_ok(unsigned, unsigned);

int main()
{
	int x1 = UINT_MAX - 100;
	int y1 = 200;
	int y2 = 10;
	printf("uadd_ok(UINT_MAX-100, 200) = %d\n", uadd_ok(UINT_MAX-100, 200));
	printf("uadd_ok(UINT_MAX-100, 10 = %d\n", uadd_ok(UINT_MAX-100, 10));
	return 0;
}

int uadd_ok(unsigned x, unsigned y)
{
	return !(x > (x+y));
}
