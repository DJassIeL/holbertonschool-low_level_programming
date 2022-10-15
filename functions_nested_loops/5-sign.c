#include "main.h"
/**
 * print_sign - prints the sign of a integrer.
 *@n: to prove
 * Return: Return 1 if is positive number, 0 if is 0, -1 in otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	{
		_putchar(45);
		return (-1);
	}
}
