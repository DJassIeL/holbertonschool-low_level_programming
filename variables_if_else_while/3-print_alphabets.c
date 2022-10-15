#include <stdio.h>
/**
* main - Prints the alphabet in lowercase and uppercase.
* Return: Return 0.
*/
int main(void)
{
	char i, k;

	for (i = 'a' ; i <= 'z'; i++)
		putchar(i);
	for (k = 'A' ; k <= 'Z'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
