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


#define DELIMITERS " \t\n"
extern char **environ;

/*----main----*/
char *readlin_e(void);
char **toke_n(char *line);

int execut_e(char **cmd, char **argv);

/*---free-----*/
void free_array(char **array);


/*----custom functions----*/
char *_strdup(const char *str);
int _strlen(char *l);
char *_strcpy(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);

#endif /*SHELL_H*/
