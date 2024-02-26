#include "main.h"

/**
 * _isdigit - entry point
 *
 * @c: number
 *
 * Description: prints 1 if c <= 9
 *
 * Return: 1 for success return 0 if failed.
 */

int _isdigit(int c)
{
	if(c <= '9' && c >= '0' )
	{
		return (1);
	}{
		return (0);
	}
}
