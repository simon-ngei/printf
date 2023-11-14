#include "main.h"

/**
 *_printf - function to produce an output
 *@format: argument
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
pope n[] ={
{"%c", _ischar}, {"%s", _isstring}, {"%%", printper_48},
};
va_list ptr;
int i = 0, dis = 0;
int j;
va_start(ptr, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Here:
while (format[i] != '\0')
{
j = 15;
while (j >= 0)
{
if (n[j].sp[0] == format[i] && n[j].sp[1] == format[i + 1])
{
dis = dis + n[j].s(ptr);
i = i + 3;
goto Here;
}
j--;
}
putchar(format[i]);
i++;
dis++;
}
va_end(ptr);
return (dis);
}

