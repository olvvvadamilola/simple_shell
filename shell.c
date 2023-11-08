#include "shell.h"
/**
* main - the main function for the simple shell
* @ac : the number of arguments
* @av : double pointer to the arguments
* Return: 0 in success
*/
int main(int ac, char **av)
{
	char *comm = NULL;
	char **arg;
	size_t n = 0;
	ssize_t x;
	int m;
	(void)ac;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, "^_^ ", _strlen("^_^ "));
		x = getline(&comm, &n, stdin);
		if (x == EOF)
		{
			free(comm);
			break;
		}
		x = num_arg(comm);
		if (x != 0 && isatty(STDIN_FILENO) == 1)
		{
			_parscomm(comm, x, &arg);
			m = _isbuiltin(arg, av);
			if (_strcmp(arg[0], "exit") == 0 && _ischar(arg[1]) == 0)
			{
				free_list(&arg), free(comm), exit(m);
			}
			free_list(&arg);
		}
		if (isatty(STDIN_FILENO) == 0)
		{
			_parscomm(comm, x, &arg);
			m = _isbuiltin(arg, av);
			if (arg == NULL || m >= 2)
			{
				free_list(&arg), free(comm), exit(m);
			}
			free_list(&arg);
		}
	}
	return (0);
}
