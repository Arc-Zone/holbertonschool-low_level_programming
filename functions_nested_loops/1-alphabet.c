#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet(void)
{
        int alphabet = 97;

        while (alphabet <= 122)
        {
               _putchar(alphabet);
                alphabet++;
        }
        _putchar('\n');
}
