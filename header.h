#ifndef _HEADER_H_
#define _HEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int numToken(char *bf, char *d);
char **tokenize(char *buffer, int nTokens, char *delims);
int execute_command(char **token_array, char **argv);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
int _strlen(char *s);



#endif
