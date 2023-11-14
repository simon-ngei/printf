#include "main.h"

/**
 *_printf - function to produce an output
 *@format: argument
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
int length = 0;
va_list ptr;
if (*format == '\0')
return (-1);
va_start(ptr, format);
while (*format != '\0')
{
if (*format != '%')
{
write(1, format, 1);
length++;
}
format++;
}
va_end(ptr);
return (length);
}
