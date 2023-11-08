#include "shell.h"
/**
 * exec_cd - function that changes directory
 * @args: args
 * Return: -1 or 0
 */
int exec_cd(char **args)
{
	if (args[1] == NULL)
	{
		perror("Oops! You forgot to provide a directory");
		return (-1);
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("Uh-oh! The directory seems to be in another dimension\n");
			return (-1);
		}
	}
	return (0);
}

/**
 * exec_env - function that prints environment
 * @args: args
 * Return: -1 or 0
 */
int exec_env(char **args)
{
	int i = 0;
	(void)(**args);

	if (environ == NULL)
	{
		perror("Oops! Something went wrong\n");
		return (-1);
	}

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}

/**
 * exec_exit - function that couses normal process termin
 * @args: args
 * Return: 0
 */
int exec_exit(char **args)
{
	if (args[1])
	{
		int exit_code = 0;
		int i = 0;

		while (args[1][i] != '\0')
		{
			if (args[1][i] >= '0' && args[1][i] <= '9')
			{
				exit_code = exit_code * 10 + (args[1][i] - '0');
			}
			else
			{
				write(STDERR_FILENO, "Invalid no\n", _strlen("Error: Invalid no\n"));
				return (-1);
			}
			i++;
		}

		return (exit_code);
	}
	else
	{
		return (0);
	}
}
