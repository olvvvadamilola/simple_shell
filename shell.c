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
		input = readlin_e();
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
