#include "main.h"
/**
 * *_memcpy - copies memory area
 *
 * @dest: destination memory area
 * @src: memory area to copy
<<<<<<< HEAD
 *  @n: number of bytes to copy
 *
 *  Return: pointer to dest
=======
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
>>>>>>> 80ffa3d8b1784f0f10ce0692d137a5f78dd072f8
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
