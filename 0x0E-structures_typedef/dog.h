#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog- struct type
 * @name: name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
