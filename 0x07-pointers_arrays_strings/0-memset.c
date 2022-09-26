#include "main.h"
/**
  * _memset - Fill memory with a constant byte
  *
  * @n: buffer size
  * @b: the constant byte
  * @s: bytes of the memory area pointed

  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
