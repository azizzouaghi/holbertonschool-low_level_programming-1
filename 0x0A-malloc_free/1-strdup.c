#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to array or NULL
 */
char *_strdup(char *str)
{
	char *my_array;
	int i, length;

	i = length = 0;
	while (str[i] != '\0')
		i++;
	i++;
	length = i;
	if (i != 0)
		my_array = malloc(i * sizeof(str));
	if (my_array == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		my_array[i] = str[i];
		i++;
	}
	return (my_array);
	free(str);
}
