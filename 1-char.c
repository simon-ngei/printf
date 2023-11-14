#include "main.h"

/**
 *_ischar - function to print a character
 *@std: to be checked
 *Return: 0
 */

int _ischar (va_list std)
{
char ptr;
ptr = va_arg(std, int);
_putchar(ptr);
return (0);
}
