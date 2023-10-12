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
	int i;
    
	i = 0;
    int printed = 0;
	va_start(args, format);

	while (format && format[i])
	{
		if (printed)
		{
			printf(", ");
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
                {
					char *str = va_arg(args, char *);
					if (str == NULL)
					{
						printf("(nil)");
					}
					else
					{
						printf("%s", str);
					}
				}
				break;
			default:
				i++;
				continue;
        }

		printed = 1;
		i++;
	}

	va_end(args);
	printf("\n");
}
