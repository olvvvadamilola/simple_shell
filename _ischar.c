#include "shell.h"
/**
 * _ischar - check if a character is present in a string
 * @str: string to check
 * Return: 0
 */
int _ischar(char *str)
{
	if (!str || *str == '\0')
	{
		return (0);
	}

	if ((*str >= '0' && *str <= '9') ||
			(*str >= 'A' && *str <= 'Z') ||
			(*str >= 'a' && *str <= 'z'))

	{
		return (1);
	}

	return (0);
}
