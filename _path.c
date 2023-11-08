#include "shell.h"
/**
* _path - checks for presence of a path in the command.
* @comm : pointer to the command
* Return: 0 in success 1 in failure
*/
int _path(char *comm)
{
	if (comm == NULL)
	{
		return (1);
	}

	while (*comm != '\0')
	{
		if (*comm == '/')
		{
			return (0);
		}
		comm++;
	}
	return (1);
}
