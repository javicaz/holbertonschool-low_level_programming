#include "main.h"

/**
 * swap_int - swaps the values of int a and int b
 * @a: Variable to swap with b
 * @b: Variable to swap with a
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
