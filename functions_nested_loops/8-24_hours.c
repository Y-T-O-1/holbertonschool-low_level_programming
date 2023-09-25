#include "main.h"

/**
* jack_bauer - Prints every minute of the day of Jack Bauer.
*/

void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
	{
			_putchar('0' + (H / 10));
			_putchar('0' + (H % 10));
			_putchar(':');
			_putchar('0' + (M / 10));
			_putchar('0' + (M % 10));
			_putchar('\n');
		}
	}
}
