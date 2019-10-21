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
struct dog
{
	char *name;
	double age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
