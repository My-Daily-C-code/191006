#include <stdio.h>
#pragma error(disable:4996)

char *ReadUsername(void)
{
	char name[30];
	printf("What is your name? ");
	gets(name);
	return name; // 무슨 반환을 하는 가?
}

int main()
{
	char *name1;
	char *name2;
	name1 = ReadUsername();
	printf("name1: %s\n", name1);
	name2 = ReadUsername();
	printf("name2: %s\n", name2);
	return 0;

}