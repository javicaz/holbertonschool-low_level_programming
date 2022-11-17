#ifndef _LINKS_H
#define _LINKS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_t - a linked list with str, length of name, and pointer
 * @str: the nodes string
 * @len: length of str
 * @next: next node in the list
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;
/*Putchar */
int _putchar(char c);
/*Task 0*/
size_t print_list(const list_t *h);
/*Task 1*/
size_t list_len(const list_t *h);
/*Task 2*/
list_t *add_node(list_t **head, const char *str);
/*Task 3*/
list_t *add_node_end(list_t **head, const char *str);
/*Task 4*/
void free_list(list_t *head);

#endif
