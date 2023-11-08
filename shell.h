#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


/*---define---*/
#define DE_LIM " \t\r\n\a"

/**---handle_strings---*/
int _strlen(const char *comm);
char *_strcpy(char *dst, char *src);
char *_strdup(char *comm);
char *_strcat(char *dst,const char *src);
int _strcmp(const char *comm, const char *b);
char *_strchr(const char *st, char *c);
int _atoi(const char *comm);
int _ischar(char *str);
char *_strtok(char *comm, const char *delim);

/*---SHELL----*/
void _parscomm(char *comm, ssize_t n, char ***av);
int _path(char *comm);
ssize_t num_arg(char *comm);
char *search(char *path, char **av);
void free_list(char ***av);
int _isbuiltin(char **av, char **nia);
void _errorM(char **aa, char **av);

/*---ENVIRON---*/
extern char **environ;
int exec_cd(char **args);
int exec_env(char **args);
int exec_exit(char **args);
int _envpath(char **av, char **gg);
char *_getenv(const char *name);


#endif /* SHELL_H */
