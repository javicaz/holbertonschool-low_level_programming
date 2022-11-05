#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>


/*_putchar*/
int _putchar(char c);
/*Task 0*/
int sum_them_all(const unsigned int n, ...);
/*Task 1*/
void print_numbers(const char *separator, const unsigned int n, ...);
/*Task 2*/
void print_strings(const char *separator, const unsigned int n, ...);

#endif
