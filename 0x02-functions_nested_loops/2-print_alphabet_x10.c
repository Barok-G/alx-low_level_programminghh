#include "main.h"
/**
 * This function checks the letter whether it is lowercase or uppercase
 * it returns nothing.
 */
void print_alphabet_x10(void)
{
	int i;

	char c;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z' ; c++)
		{ 
			_putchar(c);
		}
	
	 _putchar('\n');
	}
         _putchar('\n');
}
