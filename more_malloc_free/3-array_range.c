#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers min to max
 * @min: The first value.
 * @max: The last value.
 *
 * Return: If min > max or the function fails - NULL.
 *    If malloc fails return NULL.
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}