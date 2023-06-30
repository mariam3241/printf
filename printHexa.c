#include "main.h"

/**
 * printHexaLowered - print hexa in lowered letters
 * @x:sent parameter
 *
 * Return: k int type
 */
int printHexaLowered(va_list x)
{
	unsigned int decimal = va_arg(x, int);
	int rem_bit = 0;
	char hexa[32];
	int index = 0;
	int k = 0;
	int j = 0;

	if (decimal == 0)
	{
		_putchar('0');
		k++;
	}
	else
	{

		while (decimal)
		{
			rem_bit = decimal % 16;


			if (rem_bit < 10)
			{
				hexa[index] = rem_bit + '0';
			}
			else
			{
				hexa[index] = rem_bit - 10 + 'a';
			}
			index++;
			k++;
			decimal /= 16;
		}
		for (j = index - 1; j >= 0; j--)
		{
			_putchar(hexa[j]);
		}
	}
	return (k);
}
