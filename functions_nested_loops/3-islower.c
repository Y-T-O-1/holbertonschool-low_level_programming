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
	if (c >= 'a' && c <= 'z')
	{
		return (1); /* Character is lowercase */
	}

	else
	{
		return (0); /*y Character is not lowercase */
	}
}
