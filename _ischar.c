#include "shell.h"
/**
 * _ischar - check if a character is present in a string
 * @str: string to check
 * Return: 0
*/
int _ischar(char *str)
{
	if (!str)
		return (0);

	if ((*str >= '0' && *str <= '9'))
		return (1);

	if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		return (1);

	if (_atoi(str) < 0)
		return (1);

	return (0);
}
