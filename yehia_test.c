#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    
    _printf_decimal(-762534);
    printf("%d\n", (-762534));

    _printf_unsigned_integer(ui);
    printf("%u\n", ui);

    _printf_octal(ui);
    printf("%o\n", ui);

    _printf_address(addr);
    printf("%p\n", addr);

    _printf_string_uppercase(Best\nSchool);
    /************************ %S *********************/
    return (0);
}
