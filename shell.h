#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

int _putchar(char);
void _prompt(int ac);
void _strcat(char *dest, const char *src);
bool _strcmp(const char *s1, const char *s2, int beg, int end);
void _strcpy(char *dest, const char *src);
int _strlen(const char *s);
void exit_control(char *line, ssize_t length);

#endif /* _SHELL_H_ */
