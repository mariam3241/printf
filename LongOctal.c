#include "main.h"

/**
 * printLongOctal - prints octal
 * @x: sent parameter
 *
 * Return: k
 *
 */
int printLongOctal(va_list x)
{
	int index = 0;
	int k = 0;
	unsigned long int n = va_arg(x, int);
	int rem_bit = 0;
	char octal[64];
	int j = 0;


	if (n == 0)
	{
		_putchar('0');
		k++;
	}
	else
	{
		while (n)
		{
			rem_bit = n % 8;
			octal[index] = rem_bit + '0';
			n /= 8;
			index++;
			k++;
		}
		for (j = index - 1; j >= 0; j--)
		{
			_putchar(octal[j]);
		}
	}
	return (k);
}


