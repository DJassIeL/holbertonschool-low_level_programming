#include "main.h"
/**
 * print_last_digit - prints last digit of an integer.
 *@n: to prove
 * Return: Return last digit of an integer.
 */
int print_last_digit(int n)
{
	char i, j;

	i = n % 10;
	j = -1 * i;
	if (n < 0)
	{
		_putchar(j + '0');
		return (j);
	}
	_putchar(i + '0');
	return (i);
}
