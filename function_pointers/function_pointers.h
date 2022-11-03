#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>
#include <stdio.h>


/* Putchar*/
int _putchar(char c);
/*Task 0 */
void print_name(char *name, void(*f)(char *));
/*Task 1*/
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
