#include "shell.h"
/**
 * main - Entry point
 * @ac: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int ac, char **argv)
{
	char *input = NULL;
	/*char **cmd = NULL;*/
	int status = 0;
	(void) ac;
	(void) argv;

	while (1)
	{
		input = read_input();
		if (input == NULL)
			return (status);

        printf("%s\n", input);
        free(input);

		/*cmd = toke_n(input);*/

		/*status = execut_e(cmd, argv);*/
	}
}
