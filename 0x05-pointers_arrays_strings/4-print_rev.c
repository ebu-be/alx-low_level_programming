#include "main.h"

/**
  * print_rev - prints a string in reverse
  * @s: the string to be printed
  * Return: 0
  */

void print_rev(char *s)
{
	int len = _strlen(char *s), index;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
