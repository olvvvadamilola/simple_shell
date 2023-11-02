#include <unistd.h>
#include <stdio.h>
/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
	pid_t myppid = getppid();

	printf("%u\n", myppid);
	return (0);
}
