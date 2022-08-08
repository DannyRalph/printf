#include "main.h"

/**
 * print_string - print string
 * @s: The string to be printed
 *
 * Return: Always 0.
 */
int print_string(char *s)
{
	while (*s)
		_putchar(*s++);
return (0);
}

/**
 * number_to_string - convert number to string
 * @number: The number
 * @base: Base of the number
 * @buf: Buffer
 *
 * Return: Number to string
 */
int number_to_string(int64_t number, int base, char *buf)
{
	int i = 0, j;
	char tmp[1024];

	if (number < 0)
	{
		*buf++ = '-';
		buf[0] = '-';
		number *= -1;
	}
	if (number == 0)
	{
		*buf++ = '0';
		*buf = '\0';
		return (*buf);
	}
	while (number)
	{
		int rem = number % base;

		if (rem >= 10)
			tmp[i++] = 'a' + (rem - 10);
		else
			tmp[i++] = '0' + rem;

		number /= base;
	}

	for (j = i - 1; j >= 0; j--)
		*buf++ = tmp[j];
	*buf = '\0';
return (1);
}

/**
 * print_ptr - print pointer stdout
 * @arg: arguments
 *
 * Return: Always 0
 */
int print_ptr(va_list arg)
{
	char buffer[1024];
	int n = va_arg(arg, int);

	_putchar('0');

	_putchar('x');

	number_to_string(n, 16, buffer);

	_printf(buffer);
return (1);
}

/**
 * print_oct - print octa to stdout
 * @arg: arguments
 *
 * Return: Always 0
 */
int print_oct(va_list arg)
{
	char buffer[1024];
	unsigned int n = va_arg(arg, int);

	number_to_string(n, 8, buffer);
	_printf(buffer);
return (1);
}
