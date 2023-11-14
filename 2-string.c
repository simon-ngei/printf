#include "main.h"
/**
 *_isstring - print a string
 *@std: to be checked
 *Return: len of string
 */
int _isstring(va_list std)
{
int i;
int len;
char *ptr;
ptr = va_arg(std, char *);
if (ptr === NULL)
{
ptr = "(null)";
len = _strlen(ptr);
for (i = 0; i < len; i++)
_putchar(ptr[i]);
return (len);
}
else
{
len = _strlen(ptr);
for (i = 0; i < len; i++)
_putchar(ptr[i]);
return (len);
}
}
