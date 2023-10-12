#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: A string containing format specifiers for the arguments.
 * @...: The arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int skip_separator;
	char *separator;
	const char *fmt = format;

	separator = "";
	va_start(args, format);

	while (format && *format)
	{
		skip_separator = 0;

		if (*format == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (*format == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if(*format == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if(*format == 's')
		{
			char *str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("%s(nil)", separator);
			}
			else
			{
				printf("%s%s", separator, str);
			}
		}
		else
		{
			skip_separator = 1;
		}

		if (!skip_separator)
		{
			separator = ", ";
		}

		format++;
	}

	va_end(args);
	printf("\n");
}
