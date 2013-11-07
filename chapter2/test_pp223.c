#include <stdio.h>

int fun1(unsigned);
int fun2(unsigned);

int main()
{
	printf("fun1(0x00000076) = %x, fun2(0x00000076) = %x\n", fun1(0x00000076), fun2(0x00000076));
	printf("fun1(0x87654321) = %x, fun2(0x87654321) = %x\n", fun1(0x87654321), fun2(0x87654321));
	printf("fun1(0x000000C9) = %x, fun2(0x000000C9) = %x\n", fun1(0x000000C9), fun2(0x000000C9));
	printf("fun1(0xEDCBA987) = %x, fun2(0xEDCBA987) = %x\n", fun1(0xEDCBA987), fun2(0xEDCBA987));
	return 0;
}

int fun1(unsigned word)
{
	return (int)((word << 24) >> 24);
}
int fun2(unsigned word)
{
	return (((int)word << 24) >> 24);
}
