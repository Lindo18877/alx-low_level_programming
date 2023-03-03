#include "main.h"
#include <stdio.h>

/**
 * rot13 - ecoder rot13
 * @s: ponter to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
int x;
int y;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnoopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqqrstuvwxyzabcdefghijklm";

for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; y < 52; y++)
{
if (s[x] == data1[y])
{
s[x] = datarot[y];
break;
}
}
}
return (s);
}
