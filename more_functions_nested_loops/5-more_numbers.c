#include "main.h"
/**
 * more_numbers  - entry point
 *
 * Description: return a *b result
 *
 * Return: 0 to 9
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j > 9)
			{
			_putchar((j / 10) + '0');
			}
		_putchar((j % 10) + '0');
		}
	_putchar('\n');
	}
}
