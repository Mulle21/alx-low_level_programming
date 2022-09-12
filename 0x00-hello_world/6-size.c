#include <stdio.h>
/**
 * main - print the string in the put funcation
 * Description: using the main funcation
 * the program prints  prints the size of various types on the computer it is compiled and run on
 * Return: 0 if success.
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	print("Size of char: %ld byte(s)\n", sizeof(a));                                                                                      print("Size of int: %ld byte(s)\n", sizeof(b));  
	print("Size of long int: %ld byte(s)\n", sizeof(c));
	print("Size of long long int: %ld byte(s)\n", sizeof(d));                                                                             print("Sizee of float: %ld byte(s)\n", sizeof(f));
	return (0);
}
