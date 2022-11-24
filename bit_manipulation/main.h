#ifndef MAIN_H
#define MAIN_H

/*_putchar*/
int _putchar(char c);
/*Task 0*/
unsigned int binary_to_uint(const char *b);
/*Task 1*/
void print_binary(unsigned long int n);
/*Task 2*/
int get_bit(unsigned long int n, unsigned int index);
/*Task 3*/
int set_bit(unsigned long int *n, unsigned int index);
/*Task 4*/
int clear_bit(unsigned long int *n, unsigned int index);
/*Task 5*/
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
