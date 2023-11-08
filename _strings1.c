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
/**
 * _strcpy - copies the string pointed to by src to dst
 * @dst: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to destination string
 */
char *_strcpy(char *dst, char *src)
{
	char *cpy = src;

	if (dst == NULL || src == NULL)
	{
		return (NULL);
	}

	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (cpy);
}
/**
 * _strdup - duplicates a string
 * @comm: string to duplicate
 * Return: pointer to duplicate string or NULL if insufficient memory
 */
char *_strdup(char *comm)
{
	char *copy;
	int length;

	if (!comm)
	{
		return (NULL);
	}

	length = _strlen(comm);
	copy = malloc((length + 1) * sizeof(char));

	if (!copy)
	{
		return (NULL);
	}
	_strcpy(copy, comm);
	return (copy);
}
/**
 * _strcat - concatenates two strings
 * @dst: destination string
 * @src: source string
 * Return: pointer to destination string
 */
char *_strcat(char *dst, const char *src)
{
	char *x = dst;

	if (dst == NULL || src == NULL)
	{
		return (NULL);
	}

	while (*dst)
	{
		dst++;
	}
	for (; *src; dst++, src++)
	{
		*dst = *src;
	}
	*dst = '\0';
	return (x);
}
/**
 * _strcmp - compares two strings
 * @comm: first string
 * @b: second string
 * Return: 0 if equal, another value if not equal
 */
int _strcmp(const char *comm, const char *b)
{
	for (; *comm && *b; comm++, b++)
	{
		if (*comm != *b)
		{
			return (*comm - *b);
		}
	}
	return (*comm - *b);
}
/**
 * _strchr - locates a character in a string
 * @st: string to search in
 * @c: character to locate
 * Return: pointer to first occurrence of c in str or NULL if not found
 */
char *_strchr(const char *st, char *c);
char *_strchr(const char *st, char *c)
{
	while (*st)
	{
		if (*st == *c)
		{
			return ((char *)st);
		}
		st++;
	}
	return (NULL);
}
