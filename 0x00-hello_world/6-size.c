
#include <stdio.h>

/**
 * main - print the string in the put funcation
 * Description: using the main funcation
 * the program prints  prints the size of various types on the computer it is compiled and run on
 * Return: 0 if success.
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	print("Size of a char: %ld byte(s)\n", sizeof(c));
       	print("Size of int: %ld byte(s)\n", sizeof(i));
	print("Size of long int: %ld byte(s)\n", sizeof(li));
	print("Size of long long int: %ld byte(s)\n", sizeof(lli));
       	print("Sizee of float: %ld byte(s)\n", sizeof(f));
	return (0);
}
