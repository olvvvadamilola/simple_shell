#include "shell.h"
/**
 * toke_n - tokenizes a string
 * @line: string to tokenize
 * Return: 0
 */
char **toke_n(char *line)
{
	char *token = NULL, **cmd = NULL;
	char *temp = NULL;
	int i = 0, j = 0;

	if (!line)
		return (NULL);
	temp = _strdup(line);
	token = strtok(line, DELIMITERS);

	if (token == NULL)
	{
		free(line), line = NULL;
		free(temp), temp = NULL;
		return (NULL);
	}

	for (i = 0; token != NULL; i++)
	{
		token = strtok(NULL, DELIMITERS);
	}
	free(temp);
	temp = NULL;

	cmd = malloc((i + 1) * sizeof(char *));
	if (!cmd)
	{
		free(line), line = NULL;
		return (NULL);
	}

	token = strtok(line, DELIMITERS);
	while (token)
	{
		cmd[j] = _strdup(token);
		token = strtok(NULL, DELIMITERS);
		j++;
	}
	free(line);
	cmd[j] = NULL;
	return (cmd);
}
