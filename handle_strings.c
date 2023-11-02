#include "shell.h"
/**
 * _strcat - concatenates two strings
 *@dest: string destination
 *@src: source of sting
 * Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int length = 0;

	while (dest[length] != '\0')
	{
	length++;
	}
	for (i = 0; src[i] != '\0'; i++, length++)
	{
	dest[length] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}

#include "shell.h"
/**
 * _strcmp - function to compare strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);

			else if (s2[i] < s1[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}

#include "shell.h"

/**
* _strcpy - prototype to copy strings
* @dest: destination buffer to copy to
* @src: source string to copy to
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	char *dest_main = dest;

	for (; *src != '\0'; src++, dest++)
{
	*dest = *src;
}
	*dest = '\0';

	return (dest_main);
}

#include "shell.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of str
 * @str: string
 * Return: 0
 */
char *_strdup(const char *str)
{
	int size = 0;
	int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}

	dup = malloc((size + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
	free(dup);
}

#include "shell.h"

/**
* _strlen - length of string prototype
* @l: integer
*
* Return: 0
*/
int _strlen(char *l)
{
	int length = 0;
	int i;

	for (i = 0; l[i] != '\0'; i++)
{
	length++;
}
	return (length);
}
