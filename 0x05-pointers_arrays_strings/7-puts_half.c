#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: The string to print
 * Return: void
 */
void print_half_string(char* str) {
int len = strlen(str);
int half_len = len / 2;
    
for (int i = 0; i < half_len; i++) {
printf("%c", str[i]);
}
printf("\n");
}
