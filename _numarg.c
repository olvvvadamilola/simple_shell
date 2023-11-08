#include "shell.h"
/**
* num_arg - counts the number of the arguments
* @comm : pointer to the input user
* Return: number of the arguments
*/
ssize_t num_arg(char *comm)
{
	char *hold_d = NULL;
	char *token = NULL;
	ssize_t n = 0;


	hold_d = _strdup(comm);
	token = _strtok(hold_d, DE_LIM);
	while (token)
	{
		n++;
		token = _strtok(NULL, DE_LIM);
	}
	free(hold_d);
	return (n);
}
