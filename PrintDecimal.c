#include "main.h"

/**
  * printdecimal - a fun that prints decimal value
  * @value: parameter
  */

void printdecimal(int value)
{
	if (!value)
		return;

	printdecimal(value / 10);

	_putchar((value % 10) + '0');
}

/**
  * printdeci- a fun that prints an int value
  * @x: parameter
  * Return: an int value
  */

int printdeci(va_list x)
{
	int value = va_arg(x, int);
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

	printdecimal(value);

	return (k);
}


/**
 * printUnSigned - prints unsigned
 * @x: sent para
 *
 * Return: k
 */
int printUnSigned(va_list x)
{
	unsigned int value = va_arg(x, unsigned int);
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
