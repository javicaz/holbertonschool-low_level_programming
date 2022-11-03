#include "function_pointers.h"
/**
 * print_name - Directs string to fuction
 * @name: String to send
 * @f: function to send into string
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
