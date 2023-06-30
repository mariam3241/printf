#include "main.h"

/**
 * printOctal - prints octal
 * @x: sent parameter
 *
 * Return: k
 *
 */
int printOctal(va_list x)
{
	unsigned int n = va_arg(x, int);
	int index = 0;
	int k = 0;
	int rem_bit = 0;
	char octal[32];
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


