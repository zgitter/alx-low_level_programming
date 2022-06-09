#include "main.h"

/**
 * main - calls _isupper to check if char U
 *
 * Return: 0 if only success
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
