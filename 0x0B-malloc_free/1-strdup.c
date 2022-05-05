#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: returns a pointer to the duplicated string
 * it returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
char *ar;
unsigned int i = 0;
unsigned int j = 0;
if (str == NULL)
return (NULL);
while (str[i])
i++;
ar = malloc(sizeof(char) * (i + 1));
if (ar == NULL)
return (NULL);
while (str[j])
{
ar[j] = str[j];
j++;
}
ar[j + 1] = 0;
return (ar);
}
