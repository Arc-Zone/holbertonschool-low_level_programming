#include <stdio.h>

/*
 * Write a C program that prints the size of various types on the computer it is compiled and run on.
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeOf(char))
	printf("Size of a char: %lu byte(s)\n", sizeOf(int))
	printf("Size of a char: %lu byte(s)\n", sizeOf(long int))
	printf("Size of a char: %lu byte(s)\n", sizeOf(long long int))
	printf("Size of a char: %lu byte(s)\n", sizeOf(float))

	return(0)
}
