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

/**
 * init_dog - Initializes a struct dog.
 * @d: Pointer to the struct dog to be initialized.
 * @name: Pointer to a string representing the dog's name.
 * @age: The age of the dog as a float.
 * @owner: Pointer to a string representing the dog's owner.
 *
 * Description: This function initializes a struct dog with the provided
 * values for name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /* DOG_H */
