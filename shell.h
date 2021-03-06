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

char **_strtok(char *s);
void _strcat(char *dest, const char *src);
bool _strcmp(const char *s1, const char *s2, int beg, int end);
void _strcpy(char *dest, const char *src);
int _strlen(const char *s);

void exit_control(char *line, ssize_t length);

char *find_path(char **env, char *cmd);
void get_strseq(const char *s, int beg, int end, char **res);
int find_strseq(const char *s, const char *sep, int idx);

bool env_built(char *s, char *env[]);
void print_env(char **env);
void sig_hand(int sig_num);
int num_words(char *sentence);

void proce_frk(char **tok, char **env, char *cmd, struct stat *st, char *err);

#endif /* _SHELL_H_ */
