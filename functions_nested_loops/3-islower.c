#include "main.h"

/**
* _islower - Check description
*
* @c: An input character
*
* Description: Checks if charcter is lowercase.
*
* Return: 1 if c is lowercase, 0 otherwise.
*/

int _islower(int c)
{
	char i;
	int lower = 0;

	for 9i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
