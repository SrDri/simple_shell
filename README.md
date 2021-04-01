# 0x16. C - Simple Shell

### Description
This is a school project which goal is to mirror the sh command-line interpreter (shell), written by Ken Thompson in a limited scope.

### Authors
Carlos Galeano [Twitter](https://twitter.com/CarlosG19285722) | [Email](correo)

Juan Jose Carabali [Twitter](https://twitter.com/Juanjch_22) | [Email](juanjcarabali@gmail.com)

### Synopsis
This version of the shell has a collection of custom built-in commands along with the functionality of running scripts in the the various paths on a given operating system.

### List of allowed functions and system calls
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- getpid (man 2 getpid)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

## Repo Contents

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
|  `shell.h`	|  Header file: contains prototypes	|
|  `shell.c`	|  Main file: contains main function and an interactive mode loop|

### Function & SysCalls
`execve`, `exit`, `fork`, `free`, `getline`, `malloc`, `perror`, `wait`

