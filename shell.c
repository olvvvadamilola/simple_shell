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
	int a = 0, status = 0;
	(void) ac;
	(void) argv;

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

		for (a = 0; cmd[a]; a++)
		{
			printf("%s\n", cmd[a]);
			free(cmd[a]);
			cmd[a] = NULL;
		}
		free(cmd);
	}
}
