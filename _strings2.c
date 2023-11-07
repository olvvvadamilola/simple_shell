#include "shell.h"
/**
 * _strcat - concatenates two strings
 * @dst: destination string
 * @src: source string
 * Return: pointer to destination string
 */
char *_strcat(char *dst, char *src)
{
	char *x = dst;

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

#include "shell.c"
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

#include "shell.h"
/**
 * _strchr - locates a character in a string
 * @str: string to search in
 * @c: character to locate
 * Return: pointer to first occurrence of c in str or NULL if not found
 */
char *_strchr(const char *str, const char *c)
{
	while (*str)
	{
		if (*str == *c)
		{
			return ((char *)str);
		}
		str++;
	}
	return (NULL);
}
