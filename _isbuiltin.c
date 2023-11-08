#include "shell.h"
/**
 * _isbuiltin - checks if the command is a builtin command
 * @av: d.pointer to the arguments
 * @nia: d.pointer to the environment
 * Return: -1 if not builtin, 0 if builtin
 */
int _isbuiltin(char **av, char **nia)
{
	int i = 0;
	char *builtin[4] = {"cd", "env", "exit", NULL};

	int (*builtinexec[])(char **) = {
		&exec_cd,
		&exec_env,
		&exec_exit,
		NULL
	};
	if (!av || av[0] == NULL)
	{
		return (-1);
	}
	while (builtin[i] != NULL)
	{
		if (_strcmp(builtin[i], av[0]) == 0)
		{
			return ((*builtinexec[i])(av));
		}
		i++;
	}
	return (_envpath(av, nia));
}
