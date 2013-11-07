#include <stdio.h>

int main()
{
	int x = 0x66, y = 0x39;
	printf("x&y = 0x%.2x, x|y = 0x%.2x, ~x|~y = 0x%.2x, x&!y = 0x%.2x\n", x&y, x|y, ~x|~y, x&!y);
	printf("x&&y = 0x%.2x, x||y = 0x%.2x, !x||!y = 0x%.2x, x&&~y = 0x%.2x\n", x&&y, x||y, !x||!y, x&&~y);
	return 0;
}
