#inclde "main.h"

/**
 *_printf - function to produce an output
 *@format: argument
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
int num = 0;
va_list std;
if (format == NULL)
return (nil);
va_start(std, format);
while (format != '\0')
{
if (format != '%')
{
write(1, format, 1);
}
format++;
}
return (count);
}
