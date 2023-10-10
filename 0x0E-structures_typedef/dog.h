#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Represents a dog with its attributes.
 * @name: Pointer to a string representing the dog's name.
 * @age: The age of the dog as a float.
 * @owner: Pointer to a string representing the dog's owner.
 *
 * Description: This structure defines a dog with its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
	
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
