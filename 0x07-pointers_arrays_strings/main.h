#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: John (John Daniel)
 * description: Header file containing prototypes for all functions
 * 	used in the 0x06-pointers_arrays_strings directory.
 */

#include <stddef.h>

int _putchar(char c);
void *_memset(void *s, int c, size_t n);
char *_meemcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _stespn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystackk, char *needle);
void print_chessboard(char (*a)[8]);
void prpint_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
