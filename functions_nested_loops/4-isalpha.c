#include "main.h"

/**
* _isalpha - Check description
*
* @c: An input character
*
* Description: Checks if the character is alphabetic.
*
* Return: 1 if c is an alphabetic character, 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1); /* Character is alphabetic */
	}
		else
	{
		return (0); /* Character is not alphabetic */
	}
}
