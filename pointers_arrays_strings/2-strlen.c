#include "main.h"

/**
 * _strlen - Provides the size of a string
 * @s: string to find length
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x))
		x++;
	return (x);
}
