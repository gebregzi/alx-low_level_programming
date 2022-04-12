#include "main.h"
/*
 *_islower- checks if the character is lower case
 *
 * Return:1 if character is lower case,else 0
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);

}
