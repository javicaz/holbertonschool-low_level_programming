#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description-Trying using Char
 * Return: Always 0
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
