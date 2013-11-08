#include <stdio.h>
#include <limits.h>

int tadd_ok(int, int);

int main()
{
	int x1 = INT_MAX;
	int y1 = INT_MAX;
	int x2 = INT_MIN;
	int y2 = INT_MIN;
	printf("tadd_ok(x1, y1) = %d\n", tadd_ok(x1, y1));
	printf("tadd_ok(x2, y2) = %d\n", tadd_ok(x2, y2));
	printf("tadd_ok(x1, y1) = %d\n", tadd_ok(x1, y2));
	return 0;
}

int tadd_ok(int x, int y)
{
	return !(((x>0) && (y>0) && (x+y)<=0) || ((x<0) && (y<0) && (x+y)>=0));
}
