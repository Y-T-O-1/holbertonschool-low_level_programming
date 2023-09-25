include "main.h"

/**
* print_alphabet - Check description
*
* Description: Prints a lowercase alphabet, followed by a new line
* Return: Nothing
*/

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
	_putchar('\n');
}
