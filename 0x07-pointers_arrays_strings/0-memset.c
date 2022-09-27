#include "main.h"

/**
 * _memset - Fill memory with constant byte
 * @s: memory area to fill
 * @b: constant byte to fill
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
