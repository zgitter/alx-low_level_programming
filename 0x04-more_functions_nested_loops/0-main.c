#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'z';
    printf("%c: %d\n", c, _isupper(c));
    c = '2';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
