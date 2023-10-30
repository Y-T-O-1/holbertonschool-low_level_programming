#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog structure
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner
* Return: returns a pointer to newly created dog structure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
		return (NULL);

	int name_len = 0, owner_len = 0;
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;

	dog_t *new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc((name_len + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (int i = 0; i <= name_len; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	new_dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (int i = 0; i <= owner_len; i++)
		new_dog->owner[i] = owner[i];

	return (new_dog);
}
