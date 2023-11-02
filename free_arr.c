#include "shell.h"
/**
 * free_array - frees an array of strings
 * @array: array of strings to free
 * Return: void
 */
void free_array(char **array)
{
	int a;

	if (array == NULL)
		return;

	for (a = 0; array[a]; a++)
	{
		free(array[a]);
		array[a] = NULL;
	}
	free(array), array = NULL;
}
