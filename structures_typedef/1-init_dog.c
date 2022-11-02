#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - create variable dog
 * @d: pointer to dog struct
 * @name: The dog name
 * @age: The Float number
 * @owner: The name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
