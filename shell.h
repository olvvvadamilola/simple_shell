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


#define DELIMITERS " \t\n\r\a"

/*---Print---*/
int _putchar(char c);
void p_string(const char *ppp);

/*----main----*/
int main(int ac, char **argv);
char *read_input(void);
char **toke_n(char *line);


/*----custom functions----*/
char *_strdup(char *str);
int _strlen(char *l);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);

#endif /*SHELL_H*/