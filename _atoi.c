#include "shell.h"
/**
 * _atoi - convert a string to an integer
 * @comm: string to convert
 * Return: integer value of string
 */
int _atoi(const char *comm)
{
	int sign = 1; /*Default sign is positive*/
	int result = 0;

	if (*comm == '-')
	{
		comm++; /* Move past the negative sign */
		sign = -1; /* Set the sign to negative */
	}

	while (*comm != '\0')
	{
		if (*comm >= '0' && *comm <= '9')
		{
			result = result * 10 + (*comm - '0');
		}
		else
		{
			break; /*Break loop if non-digit character encountered*/
		}
		comm++;
	}

	return (result * sign); /*Return the integer with appropriate sign*/
}
