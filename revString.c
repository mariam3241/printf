#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 * copyString - a fun that cpies a string
 * @src: parameter
 * @dest: parameter
 * Return: char value
 */
char *copyString(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/**
 * revString - a fun that reverses a string
 * @x: parameter
 * Return: an int value
 */
int revString(va_list x)
{
	int len, i;
	char temp;
	char *dest, *s;

	s = va_arg(x, char*);
	if (s == NULL)
		return (0);
	dest = malloc(strlen(s) * sizeof(char) + 1);
	if (!dest)
		return (0);

	s = copyString(dest, s);
	if (s == NULL)
		return (0);

	len = strlen(s) - 1;
	for (i = 0; i <= len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i];
		s[len - i] = temp;
	}
	write(STDOUT_FILENO, s, len + 1);
	free(dest);
	return (len + 1);
}
