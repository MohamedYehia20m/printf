#ifndef MAIN_H_
#define MAIN_H_

/************************************************/
/******************* Includes *******************/
/************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>


/************************************************/
/************** Macros Definitions **************/
/************************************************/

#define NULL_STRING "(nil)"


/************************************************/
/****************** Structures ******************/
/************************************************/

/**
 * struct spec - Struct spec
 * @spec: the specifier.
 * @func: function to be called.
 */
typedef struct spec
{
	char spec;
	int (*func)(va_list);
} spec_t;


/************************************************/
/****************** Prototypes ******************/
/************************************************/

/*************** Basic Functions ****************/
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _atoi(char *s);
void rev_string(char *s);
char *rot13(char *str);

/**************** Task Functions ****************/
int _printf(const char *format, ...);
int (*get_spec(char s))(va_list ap);
int _printf_character(va_list ap);
int _printf_string_lowercase(va_list ap);
int _printf_integer(va_list ap);
char *_itoa(int n);
int intlen(int n);
int _printf_binary(va_list ap);
char *convert_to_binary(unsigned int n);
int binLenOf(unsigned int n);
int _printf_hexadecimal_lowercase(va_list ap);
char *convert_to_hexadecimal_lowercase(unsigned long int n);
int hexLenOf(unsigned long int n);
int _printf_hexadecimal_uppercase(va_list ap);
char *convert_to_hexadecimal_uppercase(unsigned long int n);
int _printf_decimal(va_list ap);
int _printf_unsigned_integer(va_list ap);
int TwosComplement(int c);
int _printf_octal(va_list ap);
int _printf_address(va_list ap);
int _printf_string_uppercase(va_list ap);
int _putchar_nonPrintable(char c);
int _printf_percentage(va_list ap);
int _printf_reverse_string(va_list ap);
int _printf_rot13(va_list ap);
char *_uitoa(unsigned int n);
unsigned int uintlen(unsigned int n);

#endif
