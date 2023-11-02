#include "shell.h"
/**
 * main - Entry point
 * @ac: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int ac, char **argv)
{
	char *input = NULL, **cmd = NULL;
	int status = 0;
	(void) ac;

	while (1)
	{
		input = read_input();
		if (input == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}

		cmd = toke_n(input);
		if (!cmd)
			continue;

		status = execut_e(cmd, argv);

	}
}

#include "shell.h"
/**
 * free_array - frees an array of strings
 * @array: array of strings to free
 * Return: void
 */
void free_array(char **array)
{
	int a;

	if (array == NULL)
		return;

	for (a = 0; array[a]; a++)
	{
		free(array[a]);
		array[a] = NULL;
	}
	free(array), array = NULL;
}
