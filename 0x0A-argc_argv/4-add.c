#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_positive_number(const char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (false);
		}
	}
	return (true);
}

int main(int argc, char *argv[])
{
	int sum, i, num;
	
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
    		printf("Error\n");
    		return (1);
    	}

    	num = atoi(argv[i]);

    	if (num < 0)
		{
			continue;
		}

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
