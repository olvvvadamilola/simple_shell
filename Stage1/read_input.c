#include "shell.h"
/**
 * read_input - reads input from stdin
 *
 * Return: string containing input.
 */
char *read_input(void)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t x;


	write(STDOUT_FILENO, "> ", 2);

	x = getline(&input, &len, stdin);

	if (x == -1)
	{
		free(input);
		return (NULL);
	}

	return (input);
}
