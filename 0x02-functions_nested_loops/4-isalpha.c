#include "main.h"
/**
* _isalpha - checks for alphabetic character
* @c: single letter input
*
* Return: 1 if c is a letter (lower or uppercase)
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
