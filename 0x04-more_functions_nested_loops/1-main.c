#include "main.h"

/**
 * main - calls _isdigit to check a char
 *
 * Return: returns 0 only on success
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
