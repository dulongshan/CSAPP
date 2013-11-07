#include <stdio.h>
#include <string.h>
int strlonger(char *s, char* t);

int main()
{
	char *s1 = "1234";
	char *t1 = "123";
	printf("%d\n", strlonger(s1, t1));
	char *s2 = "123";
	char *t2 = "1234";
	printf("%d\n", strlonger(s2, t2));
	printf("=====================\n");
	printf("%d\n", (1u-2u) > 0);
	printf("%d\n",(int) (1u-2u) > 0);
	return 0;
}

int strlonger(char *s, char* t)
{
	return (int)(strlen(s)-strlen(t)) > 0;
}
