#include "main.h"

/**
 * print alphabet - print lowercase
 *
 * Return: always 0
 */

void print_alphabet(void);
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
