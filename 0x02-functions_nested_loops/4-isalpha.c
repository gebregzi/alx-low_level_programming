#include "main.h"
/**
 *_isalpha - checks if the character is alphabet
 *Return: 1 if character is letter,lowercase or uppercase else 0.
 *
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
