#ifndef PIPES_H
#define PIPES_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include "../tokenize/makeArgs.h"

int containsPipe(char *s);
char ** parsePrePipe(char *s, int * preCount);
char ** parsePostPipe(char *s, int * postCount);
void pipeIt(char ** prePipe, char ** postPipe);
void pipeItRedirectToFile(char ** prePipe, char ** postPipe, char * postRedirectToFile);
void pipeItRedirectFromFile(char ** prePipe, char ** postPipe, char * postRedirectToFile);
void pipeItRedirectAppend(char ** prePipe, char ** postPipe, char * postRedirectToFile);

#endif 
