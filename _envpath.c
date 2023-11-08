#include "shell.h"
/**
 * _envpath - function that executes a command after building path
 * @av: arguments
 * @gg: non -int dp to arg.
 * Return: status of comm execution
*/
int _envpath(char **av, char **gg)
{
	char *path = getenv("PATH");
	pid_t pid;
	int child_s, status = 0;
	char *comm = NULL;

	if (!av)
		return (EXIT_FAILURE);
	comm = search(path, av);
	if (!comm)
	{
		free(comm);
		_errorM(gg, av);
		return (127);
	}
	else
	{
		pid = fork();
		if (pid == -1)
		{
			free(comm);
			perror("Error");
			return (-2);
		}
		if (pid == 0)
		{
			if (execve(comm, av, environ) == -1)
				status = EXIT_FAILURE;
			exit(status);
		}
		else
		{
			waitpid(pid, &child_s, WUNTRACED);
			free(comm);
			if (WIFEXITED(child_s))
				return (WEXITSTATUS(child_s));
			return (EXIT_FAILURE);
		}
	}
	return (EXIT_FAILURE);
}
