#include <stdio.h>
/**
 * main - entry point
 * @ac: Number of items in av
 * @av: Null terminated string.
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int i = 1; /*start from 1 because av[0] has program name*/

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
