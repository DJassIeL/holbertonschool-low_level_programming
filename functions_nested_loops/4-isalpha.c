#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *@c: to prove
 * Return: Return 1 if is alphabetic character or 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
