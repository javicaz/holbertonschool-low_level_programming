#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Execute function on each element
 * @array: int to iterate over
 * @size: size of the array
 * @action: function to use on array
 * Adding
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
