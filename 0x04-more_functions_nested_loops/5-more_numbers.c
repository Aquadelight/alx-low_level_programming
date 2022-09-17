#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0, a, b;

	while (i < 10)
	{
		a = 0;
		if (a > 9)
			b = a / 10;
		_putchar('0' + b);
		if 9a > 9)
			_putchar('0' + a % 10);
		a++;
	}
	_putchar('\n');
	i++;
}

