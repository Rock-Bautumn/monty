#ifndef MONTY
#define MONTY

#define  _GNU_SOURCE



#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
int space_count(char *str, char *delimiter);

void monty_exit(FILE *fp);
void read_file(FILE *fp);
FILE *monty_init(int argc, char *file);
char **ndsplitter(char *fun, char *delimiter);
void free_list(char **list);


#endif /* MONTY */
