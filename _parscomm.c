#include "shell.h"
/**
 * _parscomm - parses command
 * @comm: pointer to command input
 * @n: number of arguments
 * @av: pointer to array of arguments
 * Return: void
 */
void _parscomm(char *comm, ssize_t n, char ***av)
{
	char *token;
	int i = 0;
	int j;


	*av = malloc(sizeof(char *) * (n + 1));
	if (!(*av))
	{
		free(*av);
		return;
	}
	token = _strtok(comm, DE_LIM);
	while (token)
	{
		(*av)[i] = malloc(sizeof(char) * (_strlen(token) + 1));
		if (!(*av)[i])
		{
			j = 0;
			while (j < i)
			{
				free((*av)[j]);
				j++;
			}
			free(*av);
			return;
		}
		_strcpy((*av)[i], token);
		token = _strtok(NULL, DE_LIM);
		i++;
	}
	(*av)[i] = NULL;
}
