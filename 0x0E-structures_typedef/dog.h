#ifndef HEADER_FILE
#define HEADER_FILE
int _putchar(char c);
/**
 * struct dog - define type struct dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: dog struct type.
 */
typedef struct dog
{
	char *name;
	double age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
