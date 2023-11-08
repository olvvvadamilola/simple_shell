#include "shell.h"
/**
 * _strtok - Split a string into tokens
 * @comm: The string to split
 * @delim: delimiter characters
 * Return: The next token in the string or NULL if no more tokens are found
 */
char *_strtok(char *comm, const char *delim)
{
	static char *c;
	char *i;

	if (comm != NULL)
	{
		c = comm;
	}
	if (!c || *c == '\0')
	{
		return (NULL);
	}
	while (*c && _strchr(delim, c))
	{
		c++;
	}
	if (*c == '\0')
	{
		return (NULL);
	}
	i = c;
	while (*c && !_strchr(delim, c))
	{
		c++;
	}
	if (*c == '\0')
	{
		c = NULL;
	}
	else
	{
		*c = '\0';
		c++;
	}
	return (i);
}
