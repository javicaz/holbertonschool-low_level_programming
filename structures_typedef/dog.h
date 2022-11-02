#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Short description
 *@name : char name
 *@age : float age in number
 *@owner : char name of owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*Task 1*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/*Task 2*/
void print_dog(struct dog *d);
/*Task 3 - This one is to define new name for struct dog*/
typedef struct dog dog_t;
 

#endif
