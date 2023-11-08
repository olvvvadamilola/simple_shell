#include "shell.h"
/**
* free_list - frees a list
* @av: list to be freed
*/
void free_list(char ***av)
{
	int f = 0;

	while ((*av)[f] != NULL)
	{
		free((*av)[f]);
		f++;
	}
	free((*av));
}
