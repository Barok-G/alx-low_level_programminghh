#include "main.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int _putchar(int c)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
 _putchar('\n');
return (0);
}



