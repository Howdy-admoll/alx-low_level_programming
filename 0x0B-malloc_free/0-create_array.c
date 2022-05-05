#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of char
 * and initializes it with a specific char
 * @c: the character to initialize the array with
 * @size: the size of the array
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
i = 0;
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}
