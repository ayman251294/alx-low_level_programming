#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
       	char *dup;
	unsigned int i, len;
	
	if (str == NULL)
		return (NULL);
	
	len = 0;
	while (*(str + len))
		len++;
	
	dup = malloc(sizeof(char) * (len + 1));
	
	if (dup == NULL)
		return (NULL)
			
			for (i = 0; i < len; i++)
				*(dup + i) = *(str + i);
	
	*(dup + len) = '\0';
	
	return (dup);
}
