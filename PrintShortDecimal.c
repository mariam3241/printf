#include "main.h"

/**
  * printShortdecimal - a fun that prints decimal value
  * @value: parameter
  */

void printShortdecimal(int value)
{
	if (!value)
		return;

	printShortdecimal(value / 10);

	_putchar((value % 10) + '0');
}

/**
  * printShortDecimal- a fun that prints an int value
  * @x: parameter
  * Return: an int value
  */

int printShortDecimal(va_list x)
{
	short int value = va_arg(x, int);
	int k = 0;
	int tmp = value;

	if (value < 0)
	{
		_putchar('-');
		value *= -1;
		k++;
	}

	if (value == 0)
	{
		_putchar('0');
		k++;
	}

	while (tmp > 0)
	{
		tmp /= 10;
		k++;
	}

	printShortdecimal(value);

	return (k);
}


/**
 * printShortUnsigned - prints unsigned
 * @x: sent para
 *
 * Return: k
 */
int printShortUnsigned(va_list x)
{
	unsigned short int value = va_arg(x, int);
	int k = 0;
	int index = 0;
	char buffer[32];


	if (value == 0)
	{
		_putchar('0');
		k++;
	}
	while (value > 0)
	{
		buffer[index++] = (value % 10) + '0';
		value /= 10;
		k++;
	}
	while (index > 0)
	{
		_putchar(buffer[--index]);
	}
	return (k);
}
