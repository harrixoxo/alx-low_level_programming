#include "main.h"
/**
 * _isupper - prints uppercase
 * @c: holds upper case letters
 * Return: success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
