[![Holberton's simple shell](https://www.holbertonschool.com/holberton-logo.png "Holberton's simple shell")](https://github.com/SrDri/simple_shell "Holberton's simple shell")
#### Simple Shell written in C & Bash. 💎

| ** 🐔 Menu 🐔 |
| ------------ |
| 🔍 - [Description](https://github.com/SrDri/simple_shell#description "Description]") - Description. |
| ❕ - [Synopsis](https://github.com/SrDri/simple_shell#synopsis "Synopsis]") - Synopsis.|
| 📃 - [Allowed functions](https://github.com/SrDri/simple_shell#list-of-allowed-functions-and-system-calls "Allowed functions]") - Allowed functions.|
| 📢 - [Requirements](https://github.com/SrDri/simple_shell#requirements "Requirements]") - Requirements. |
| 🐺 - [Functions required](https://github.com/SrDri/simple_shell#functions-required-in-the-program "Functions required]") - Functions required. |
| 🔨 - [Installation](https://github.com/SrDri/simple_shell#installation "Installation]") - Installation. |
|   |



------------
### Description 🔍
This is a school project which goal is to mirror the sh command-line interpreter (shell), written by Ken Thompson in a limited scope but on a simpler way.

### Synopsis ❕
This version of the shell has a collection of custom built-in commands along with the functionality of running scripts in the the various paths on a given operating system.

### List of allowed functions and system calls 📃
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
- stat (man 2 stat)
- lstat (man 2 lstat)
- fstat(man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

------------

# Requirements 📢
This project was designed to be runned in **Ubuntu 14.04 LTS linux environment** and as** to be compiled** using the GNU compiler collection **v. gcc 4.8.4** with the following flags:
`-Wall, -Werror, -Wextra, -pedantic`

------------

## Functions required in the program 🐺

|   **File**    |  **Brief description**                       |
|---------------|---------------------------------------|
|  `AUTHORS`	|  [AUTHORS](https://github.com/SrDri/simple_shell/blob/main/AUTHORS "AUTHORS") - List that contents the contributors to this project.|
|  `_prompt.c`	|  [_prompt.c](https://github.com/SrDri/simple_shell/blob/main/_prompt.c "_prompt.c]") - Function that writes a message in the main prompt.|
|  `_putchar.c` |[_putchar.c](https://github.com/SrDri/simple_shell/blob/main/_putchar.c "_putchar.c]") - Function that writes a character to standard input.|
|  `_strcat.c`	|  [_strcat.c](https://github.com/SrDri/simple_shell/blob/main/_strcat.c "_strcat.c]") - Function that concatenates two strings.|
|  `_strcmp.c`	|  [_strcmp.c](https://github.com/SrDri/simple_shell/blob/main/_strcmp.c "_strcmp.c]") - Function that compares two strings.|
|  `_strcpy.c`	|  [_strcpy.c](https://github.com/SrDri/simple_shell/blob/main/_strcmp.c "_strcpy.c]") - Function that creates a copy of a string.|
|  `_strlen.c`	|  [_strlen.c](https://github.com/SrDri/simple_shell/blob/main/_strlen.c "_strlen.c]") - Function that gets the length of a string.|
|  `_strseq.c`	|  [_strseq.c](https://github.com/SrDri/simple_shell/blob/main/_strseq.c "_strseq.c]") - Function that takes a sequence from an interval then copies it into a string.|
|  `authors_gen.sh`	|  [authors_gen.sh](https://github.com/SrDri/simple_shell/blob/main/authors_gen.sh "authors_gen.sh]") - Bash script that generates a file containing the authors of this project.|
|  `compile`	|  [compile](https://github.com/SrDri/simple_shell/blob/main/compile "compile]") - Bash script that compiles the entire project for easier usage.|
|  `env_built.c`	|  [env_built.c](https://github.com/SrDri/simple_shell/blob/main/env_built.c "env_built.c]") - Function that handles the enviroment built-in command.|
|  `exit_control.c`	|  [exit_control.c](https://github.com/SrDri/simple_shell/blob/main/exit_control.c "exit_control.c]") - Function that handles the exit phase of the project and writes a message accordingly.|
|  `find_str_seq.c`	|  [find_str_seq.c](https://github.com/SrDri/simple_shell/blob/main/find_str_seq.c "find_str_seq.c]") - Function that finds the index of a separator.|
|  `path.c`	|  [path.c](https://github.com/SrDri/simple_shell/blob/main/path.c "path.c]") - Function that resolves the PATH to a command. For instance, cmd.|
|  `print_env.c`	|  [print_env.c](https://github.com/SrDri/simple_shell/blob/main/print_env.c "print_env.c]") - Function that prints out the enviroment. For instance, cmd.|
|  `shell.c`	|  [shell.c](https://github.com/SrDri/simple_shell/blob/main/shell.c "shell.c]") - Main function of the project.|
|  `shell.h`	|  [shell.h](https://github.com/SrDri/simple_shell/blob/main/shell.c "shell.h]") - Main header file containing all the prototypes and libraries required for this program.|
|  `placeholder.c`	|  [placeholder.c](https://github.com/SrDri/simple_shell/blob/main/placeholder.c "placeholder.c]") - I'm a placeholder, yep I hold lines that will be edited in the future but I'm cooler than you.|
|  `placeholder.c`	|  [placeholder.c](https://github.com/SrDri/simple_shell/blob/main/placeholder.c "placeholder.c]") - I'm a second placeholder, yep I hold lines that will be edited in the future but I'm cooler than the first place holder.|
|  `placeholder.c`	|  [placeholder.c](https://github.com/SrDri/simple_shell/blob/main/placeholder.c "placeholder.c]") - I'm a second placeholder, yep I hold lines that will be edited in the future but I'm cooler than the second place holder.|

------------

# Installation 🔨
1.  Clone this repository in your personal computer or machine with the following command:
`git clone https://github.com/SrDri/simple_shell.git`

2.  Go to the project s folder using the following command:
`cd simple_shell`

3.  Compile the project using our sh script as shown below:
`./compile`

4.  Run the exectuable that was created on the previous step as following:
`./hsh`

######  If everything worked as supposed to, you should be able to see the program s command prompt

------------

### Authors 💩
- Carlos Galeano [Twitter](https://twitter.com/CarlosG19285722) | [Email](dnny419@gmail.com).
- Juan Jose Carabali [Twitter](https://twitter.com/Juanjch_22) | [Email](juanjcarabali@gmail.com).

------------
🔼 - [Back to the top](https://github.com/SrDri/simple_shell# "Back to the top]") - Back to the top. 🔼

