#define _THUMB_H 
#ifdef _THUMB_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int decod_thumb_file(char *,FILE *, FILE *);

void decod_thumb_instruction(char *instruction_hex);

#endif