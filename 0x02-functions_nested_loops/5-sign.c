#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the int to check
 * Return: 1 and print +if n iis zero
 * -1 and -if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1); 
}
