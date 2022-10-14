#include <stdio.h>

/**
 * leet - turn aeotl into 43071 respectively
 * @s: string to replace from
 *
 * Description: Mozart is so over valued
 *
 * Return: Pointer to changed string
 */

char *leet(char *s)
{
	char *moz;

	moz  = s;

	while (*s)
	{
		(*s == 'a' || *s == 'A') ? *s = '4' : 0;
		(*s == 'e' || *s == 'E') ? *s = '3' : 0;
		(*s == 'o' || *s == 'O') ? *s = '0' : 0;
		(*s == 't' || *s == 'T') ? *s = '7' : 0;
		if (*s == 'l' || *s == 'L')
			(*s) = '1';
		s++;
	}

	return (moz);
}
