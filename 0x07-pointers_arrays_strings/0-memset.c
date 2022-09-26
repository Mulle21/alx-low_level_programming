#include "main.h'
/**
 * _memset - concatenates two strings
 * @s:  pointer
 * @b: constant byte
 * @n: n bytes of memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n);
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}

	return (s);
}
