#include "main.h"
int prime_prev(int x, int y);
/**
 * Description: is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_prev(n, 2));
}
/**
 * Description: prime_prev - calculates if a number is prime with function
 * @x: number to evaluate
 * @y: iterator
 * Return: 1 if n is prime number, 0 if not
 */
int prime_prev(int x, int y)
{
	if (x % y == 0 && x == y)
		return (1);
	if (x % y == 0 && x != y)
		return (0);
	return (prime_prev(x, y + 1));
}
