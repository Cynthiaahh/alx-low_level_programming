#include <stdio.h>
/**
 * main - print out of data types in c
 * code by cynthia
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %zu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %zu byte(S)\n", (unsigned long)sizeofb(b));
	printf("size of a long int: %zu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %zu byte(S)\n", (unsigned long)sizeof(d));
	printf("size of a float: %zu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}


