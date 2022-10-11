#include "main.h"

/**
 * print_last_digit - print the last digit of arg
 * @d: int to be evaluated
 *
 * Return: last digit of arg
 */

int print_last_digit(int d)
{
	int n;

	n = d % 10;

	if (n < 0)
		n *= -1;
	_putchar('0' + n);
	return (n);
}
