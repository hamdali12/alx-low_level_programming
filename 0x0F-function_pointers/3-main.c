#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    int num1 = atoi(argv[1]);
    char *operator = argv[2];
    int num2 = atoi(argv[3]);

    int (*func)(int, int);
    func = get_op_func(operator);

    if (func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    if ((*operator == '/' || *operator == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    printf("%d\n", func(num1, num2));

    return (0);
}
