#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc
 * @b: memory to allocate in bytes
 *
 * Return: Pointer to memory space
 */
void *malloc_checked(unsigned int b)
{
	void *data;

	data = malloc(b);
	if (data == NULL || b == 0)
		exit(98);
	return (data);
}
