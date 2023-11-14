#include "main.h"

/**
 *_putchar - writes char to stardard output
 *@d: character to print
 *Return: 0
 */
int _putchar(char d)
{
return (write(1, &d, 1));
}
