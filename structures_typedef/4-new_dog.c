#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age by float
 * @owner: dog owner name
 *
 * Return: Pointer to new dog, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len1, len2, x;

	len1 = len2 = x = 0;
	while (name[len1++] != '\0')
		;
	while (owner[len2++] != '\0')
		;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(len1);
	new_dog->owner = malloc(len2);

	do {
		new_dog->name[x] = name[x];
	} while (name[x++] != '\0');
	x = 0;
	do {
		new_dog->owner[x] = owner[x];
	} while (owner[x++] != '\0');
	new_dog->age = age;
	return (new_dog);
}
