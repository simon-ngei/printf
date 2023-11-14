#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _ischar (va_list std);
int _isstring(va_list std);
int _strlen(char *ptr);
int _strlent(const char *ptr);
int printper_48(void);

#endif
