#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 *
 * Return: 0 on success
 *
 */
int _strlen(char *s)
{
	int count = 0;

	if (s != '\0')
	{
		while (*(s + count) != '\0')
			count++;
	}
	return (count);
}
/**
 * _strcpy - copies the string with \0 to the buffer
 * @dest: pointer to dest
 * @src: pointer to string
 *
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_n, len_o;
	struct dog *dog1;

	dog1 = malloc(sizeof(struct dog));
	if (dog1 == NULL)
		return (NULL);
	len_n = _strlen(name);
	dog1->name = malloc(sizeof(char) * (len_n + 1));
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	dog1->name = _strcpy(dog1->name, name);
	dog1->age = age;
	len_ow = _strlen(owner);
	dog1->owner = malloc(sizeof(char) * (len_o + 1));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	dog1->owner = _strcpy(dog1->owner, owner);
	return (dog1);
}
