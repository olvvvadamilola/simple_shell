#include "shell.h"
/**
 * p_string - prints a string
 * @ppp: The string to print
 * Return: void
 */
void p_string(const char *ppp)
{
	write(STDOUT_FILENO, ppp, strlen(ppp));
}
