#include <stdio.h>

/**
 * main - print the string put funcation
 * comments in C source code.
 *
 * Description: using the main funcation.
 * that prints the size of various types on the computer it is,
 * compiled and run on.
 * Return: 0
 */

int main(void)
{
	char d;
	int a;
	long int b;
	long long int c;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(d));
	printf("Size of an int: %ld byte(s)\n", sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);

}
