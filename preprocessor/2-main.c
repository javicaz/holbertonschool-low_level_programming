#include <stdio.h>

/**
 * main - Prints name of the file it was compiled from with new line
 *
 * Return: Always (0)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return(0);
}
