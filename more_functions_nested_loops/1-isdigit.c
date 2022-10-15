#include "main.h"
/**
 * _isdigit - checks for a digit.
 *@c: to prove
 * Return: return 1 is c is a digit.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
