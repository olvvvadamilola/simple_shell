#include "shell.h"
/**
* search - searches for a command in the PATH
* @path: pointer to the PATH
* @av: pointer to the command
* Return: pointer to the command
*/
char *search(char *path, char **av)
{
	char *fd = NULL;
	char *pat_h = NULL;
	char *token = NULL;

	if (path)
	{
		pat_h = _strdup(path);
		if (!pat_h)
		{
			free(pat_h);
			return (NULL);
		}
		token = _strtok(pat_h, ":");
		while (token)
		{
			fd = malloc((_strlen(token) + _strlen(av[0]) + 2) * sizeof(char));
			if (!fd)
			{
				free(fd), free(pat_h);
				perror("Error");
				return (NULL);
			}
			_strcpy(fd, token), _strcat(fd, "/"), _strcat(fd, av[0]);
			if (access(fd, F_OK) == 0)
			{
				free(pat_h);
				return (fd);
			}
			free(fd);
			token = _strtok(NULL, ":");
		}
		free(pat_h);
	}
	if (access(av[0], F_OK) == 0)
	{
		if (_path(av[0]) == 0)
			return (_strdup(av[0]));
	}
	return (NULL);
}
