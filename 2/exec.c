#include "shell.h"

/**
 * execut_e - executes a command in a child process
 * @cmd: command to execute
 * @argv: array of arguments
 * Return: Always 0.
 */
int execut_e(char **cmd, char **argv)
{
	pid_t branch;
	int status;

	branch = fork();
	if (branch == 0)
	{
		if (execve(cmd[0], cmd, environ) == -1)
		{
			perror(argv[0]);
			free_array(cmd);
			exit(0);
		}
	}
	else
	{
		waitpid(branch, &status, 0);
		free_array(cmd);
	}
	return (WEXITSTATUS(status));
}
