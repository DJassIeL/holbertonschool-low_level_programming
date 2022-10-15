#include "main.h"
/**
 * more_numbers - Print the numbers from 0 to 14 ten times.
 * Return: void function not have return.
 */
void more_numbers(void)
{
	int i, j, k;

	for (i = 0 ; i <= 9; i++)
	{
		for (j = 48 ; j <= 49; j++)
		{
			for (k = 48 ; k <= 57; k++)
			{
				if (j > 48 && (j + k) <= 101)
					_putchar(j);
				else if (j == 48 || (j + k) <= 101)
					_putchar(k);
			}
		}
		_putchar('\n');
	}
}
