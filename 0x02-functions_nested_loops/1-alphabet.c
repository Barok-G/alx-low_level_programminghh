#include "main.h"
/**
 * void print_aplphabet(void) will print alphabet
 * and it doesnt have return value
 */
void print_alphabet(void)
{
	char c;
	for(c='a';c<='z';c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

