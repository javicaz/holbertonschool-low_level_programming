#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatanate from s2 onto s1 in a new memory space
 * @s1: string one contains
 * @s2: string two newly allocated
 * @n: number of bytes from s2 to concat s1
 *
 * Return: pointer to new string shows NULL if the functions fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x, y, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; *(s1 + len1); len1++)
		;
	for (len2 = 0; *(s2 + len2); len2++)
		;
	len2++;

	if (n > len2)
		s = malloc((len1 + len2) * sizeof(*s));
	else
		s = malloc((len1 + n + 1) * sizeof(*s));
	if (s == NULL)
		return (NULL);

	for (x = 0; x < len1; x++)
		*(s + x) = *(s1 + x);
	for (y = 0; y < len2 && y < n; x++, y++)
		*(s + x) = *(s2 + y);
	*(s + x) = '\0';
	return (s);
}
