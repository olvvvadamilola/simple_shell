#include "shell.h"
/**
 * _errorM - prints an error message
 * @av: pointer to arguments
 * @gg: pointer to arguments
 * Return: void
 */
void _errorM(char **gg, char **av)
{
	char *error_message = ": not found\n";
	int len_gg = _strlen(gg[0]);
	int len_av = _strlen(av[0]);
	int len_errorM = _strlen(error_message);

	write(STDERR_FILENO, gg[0], len_gg);
	write(STDERR_FILENO, ": 1: ", _strlen(": 1: "));
	write(STDERR_FILENO, av[0], len_av);
	write(STDERR_FILENO, error_message, len_errorM);
}
