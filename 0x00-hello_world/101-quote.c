#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Write a C program that prints exactly and that
 * piece of art is useful.
 * Return: always 0 (success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
