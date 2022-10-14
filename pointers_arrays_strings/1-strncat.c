#include "main.h"

/**
 * _strncat - concatenates src to the dest string
 * @dest: string to append by src
 * @src: source string
 * @n: number of bytes to concatenate
 *
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
