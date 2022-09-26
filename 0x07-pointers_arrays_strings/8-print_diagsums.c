#include "main.h"
/**
 * print_chessboard - prints the chessboard
 *
 *
 * @a: two dimension array to print
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; x < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar(10);
	}
}