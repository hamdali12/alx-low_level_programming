#include <stdio.h>

int main(void)
{
    char str[] = "_putchar";
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
    putchar('\n');
    return (0);
}
