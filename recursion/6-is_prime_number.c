#include "main.h"

/**
 * Description: prime_prev - checks to see if number is prime
 * @x: factor check
 * @y: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */
int prime_prev(int x, int y)
{
	if (x < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (prime_prev(x + 1, y));
}

/**
 * Description: is_prime_number - states if number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_prev(2, n));
}
