#include "main.h"

/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: printer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	ink j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	m = 0;
	while (scr[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
