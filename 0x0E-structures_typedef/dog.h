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
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

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

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the elements of a struct dog
 * in the specified format. If an element is NULL, it prints "(nil)".
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog and initializes its attributes.
 * @name: Pointer to a string representing the dog's name.
 * @age: The age of the dog as a float.
 * @owner: Pointer to a string representing the dog's owner.
 *
 * Return: Pointer to the new dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner);


/**
 * free_dog - Frees memory allocated for a dog.
 * @d: Pointer to the dog to be freed.
 *
 * Description: This function frees memory allocated for the name and owner
 * of a dog, and then frees the memory of the dog structure itself.
 */
void free_dog(dog_t *d);

#endif /* DOG_H */
