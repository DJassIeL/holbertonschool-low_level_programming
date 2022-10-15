#include "main.h"
/**
 * _islower - checks for lowercases.
 *@c: to prove
 * Return: Return 1 if a letter is lowercase or 0 otherwise.
 */
int _islower(int c)
{
	if (c > 96 && c <= 122)
		return (1);
	else
		return (0);
}
