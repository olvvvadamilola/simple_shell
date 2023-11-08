#include "shell.h"
/**
* _getenv - gets the value of an environment variable
* @name: name of environment variable
* Return: pointer to value of environment variable
*/
char *_getenv(const char *name)
{
	char *i, *j;
	char **en = environ;

	if (name == NULL)
	{
		return (NULL);
	}
	while (*en)
	{
		if (*en && _strcmp(*en, name) == 0)
		{
			i = _strchr(*en, "=");
			if (i != NULL)
			{
				i++;
				j = malloc((_strlen(i) + 1) * sizeof(char));
				if (j != NULL)
				{
					_strcpy(j, i);
					return (j);
				}
			}
		}
		en++;
	}
	return (NULL);
}
