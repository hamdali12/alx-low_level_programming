#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
    		result = i * j;
    		if (j == 0)
    		{
    			printf("%d", result);
    		}
    		else
    		{
    			printf(", %2d", result);
    		}
    	}
    	printf("\n");
	}
}
