#ifndef SHELL_H
#define SHELL_H

/*---libraries---*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <errno.h>
#include <fcntl.h>

/*---Print---*/
int _putchar(char c);
void p_string(const char *ppp);

/*----main----*/
int main(int ac, char **argv);
char *read_input(void);


#endif
