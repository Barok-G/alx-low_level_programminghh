#include "main.h"
/**
 * int _isalpha(int c); will return 1 if it is alphabet and 0 if it is not
 * return:nothing
 */
int _isalpha(int c)
{
	int i;

	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return 1;
	else
		return 0;
}

