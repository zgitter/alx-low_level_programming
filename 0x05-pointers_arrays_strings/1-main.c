#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int inty1;
    int inty2;
    char chary1;
    char chary2;
    char *s;

    s = "My School";
    chary1 = s[2];
    chary2 = s[3];

    inty1 = _putchar(chary1);
    inty2 = _putchar(chary2);

    printf("The expected vals: chary1 (%c) and chary2 (%c) then inty1 (%d) and inty2 (%d)\n", chary1, chary2, inty1, inty2);

    return (0);
}
