#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/*---define---*/
#define DE_LIM " \t\r\n\a"

/**---handle_strings---*/
int _strlen(const char *comm);
char *_strcpy(char *dst, const char *src);
char *_strdup(char *comm);
char *_strcat(char *dst, char *src);
int _strcmp(const char *comm, const char *b);
char *_strchr(const char *str, const char *c);
int _atoi(const char *comm);
int _ischar(char *str);


#endif /* SHELL_H */
