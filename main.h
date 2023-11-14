#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct{ 
const char *sp;
int (*s)();
}pope;

int _printf(const char *format, ...);
int _ischar (va_list std);
int _isstring(va_list std);
int _strlen(char *ptr);
int _strlent(const char *ptr);
int printper_48(void);

#endif
