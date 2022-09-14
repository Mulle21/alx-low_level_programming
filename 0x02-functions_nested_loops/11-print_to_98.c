#include <stdio.h>
#include "main.h"
/**
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)

				print("%, ", i);
			else if (i == 98)
				print("%d\n", i);
		}
		{
			for (j = n; j >= 98; j--)
			{
				if (j != 98)
					print("%d, ", j);
				else if (j == 98)
					print("%d\n", j);
			}
		}
	}


