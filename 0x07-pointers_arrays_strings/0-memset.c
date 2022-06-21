#include "main.h"

/**
 * _memset - fillsthe first n bytes of the memory area with constant byte
 * @n: number of bytes
 * @s: the memory area pointed to
 * @b: constant byte
 * Return: s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
