#include "shell.h"
/**
 * read_line - reads line from stdin
 *
 * Return: string containing input.
 */
char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t x;


	write(STDOUT_FILENO, "$ ", 2);

	x = getline(&line, &len, stdin);

	if (x == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
