#include "main"

/**
 * _isalpha - Cheks for alphabetic character
 * @c: The character to be chcked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)

{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
