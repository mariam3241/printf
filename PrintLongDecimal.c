#include "main.h"

/**
  * printLongdecimal - a fun that prints decimal value
  * @value: parameter
  */

void printLongdecimal(int value)
{
	if (!value)
		return;

	printLongdecimal(value / 10);

	_putchar((value % 10) + '0');
}

/**
  * printLongDecimal- a fun that prints an int value
  * @x: parameter
  * Return: an int value
  */

int printLongDecimal(va_list x)
{
	long int value = va_arg(x, long int);
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

	printLongdecimal(value);

	return (k);
}


/**
 * printLongUnsigned - prints unsigned
 * @x: sent para
 *
 * Return: k
 */
int printLongUnsigned(va_list x)
{
	unsigned long int value = va_arg(x, unsigned long int);
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
