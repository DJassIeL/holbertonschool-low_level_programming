ii#include "main.h"
/**
 * _isupper - checks for uppercases.
 *@c: to prove
 * Return: return 1 is c is uppercase.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
