#include <unistd.h>
#include <stdio.h>
/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
	pid_t mypid = getpid();

	printf("%u\n", mypid);
	return (0);
}
