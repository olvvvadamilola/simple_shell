#include "shell.h"
/**
 * _strlen - returns the length of a string
 * @comm: pointer to string to measure
 * Return: length of string
 */
int _strlen(const char *comm)
{
	int len = 0;

	if (comm == NULL)
	{
		return (0);
	}

	for (; comm[len] != '\0'; len++)
	{
		continue;
	}
	return (len);
}

#include "shell.h"
/**
 * _strcpy - copies the string pointed to by src to dst
 * @dst: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to destination string
 */
char *_strcpy(char *dst, const char *src)
{
	char *a = src;

	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (a);
}

#include "shell.h"
/**
 * _strdup - duplicates a string
 * @comm: string to duplicate
 * Return: pointer to duplicate string or NULL if insufficient memory
 */
char *_strdup(char *comm)
{
	char *copy;

	if (!comm)
	{
		return (NULL);
	}
	copy = malloc((_strlen(comm) + 1) * sizeof(char));
	if (!copy)
	{
		return (NULL);
	}
	_strcpy(copy, comm);
	return (copy);
}
