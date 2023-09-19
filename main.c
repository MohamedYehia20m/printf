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
    char *strtest = "ABCD";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Negative Length:[%d, %i]\n", -1 * len, -1 * len);
    printf("Negative Length:[%d, %i]\n", -1 * len2, -1 * len2);
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("NULL Length:[%d, %i]\n", NULL, NULL);
    printf("NULL Length:[%d, %i]\n", NULL, NULL);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("signed:[%u]\n", -100);
    printf("signed:[%u]\n", -100);
    _printf("signed:[%u]\n", -1000);
        printf("signed:[%u]\n", -1000);
	_printf("signed:[%u]\n", -10000);
	    printf("signed:[%u]\n", -10000);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("octal:[%o]\n", 100);
    printf("octal:[%o]\n", 100);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("hexadecimal:[%x, %X]\n", 100, 100);
    printf("hexadecimal:[%x, %X]\n", 100, 100);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("revert:[%r]\n", strtest);
    printf("revert:[%r]\n", strtest);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("rot13:[%R]\n", strtest);
    printf("rot13:[%R]\n", strtest);
    _printf("binary: %b\n", 98);
    /*printf("binary: %b\n", 98);*/
    _printf("%S\n", "Best\nSchool");
    /*printf("%S\n", "Best\nSchool");*/
    return (0);
}
