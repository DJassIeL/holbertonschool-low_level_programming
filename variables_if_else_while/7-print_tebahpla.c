#include <stdio.h>
/**
* main - Prints the alphabet in reverse.
* Return: Return 0.
*/
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
