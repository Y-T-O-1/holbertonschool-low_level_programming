#include "main.h"

/**
* print_alphabet - Check description
*
* Description: Prints a lowercase alphabet, followed by a new line
* Return: Nothing
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
