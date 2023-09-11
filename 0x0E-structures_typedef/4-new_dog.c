#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog instance
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int newl, oldl, index;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (newl = 0; name[newl]; newl++)
		;
	newl++;
	dog->name = malloc(newl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (index = 0; index < newl; index++)
		dog->name[index] = name[index];
	dog->age = age;
	for (oldl = 0; owner[oldl]; oldl++)
		;
	oldl++;
	dog->owner = malloc(oldl * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (index = 0; index < oldl; index++)
		dog->owner[index] = owner[index];
	return (dog);
}
