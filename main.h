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
	char *spec;
	int (*func)(va_list); /* TODO: Parameters will be modified */
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

/**************** Task Functions ****************/
int _printf(const char *format, ...);
int (*get_spec(char *s))(va_list ap);
int _printf_character(va_list ap);
int _printf_string_lowercase(va_list ap);
int _printf_integer(va_list ap);
char *_itoa(int n);
int intlen(int n);
int _printf_binary(va_list ap);
char *convert_to_binary(int n);
int binLenOf(int n);
int _printf_hexadecimal_lowercase(va_list ap);
char *convert_to_hexadecimal_lowercase(int n);
int hexLenOf(int n);
int _printf_hexadecimal_uppercase(va_list ap);
char *convert_to_hexadecimal_uppercase(int n);
int _printf_decimal(int c);
unsigned int _printf_unsigned_integer(int c);
int TwosComplement(int c);
int _printf_octal(int argument);
int convert_to_octal(int argument);
int _printf_address(void *argument);
int _printf_string_uppercase(char *str);
int  _putchar_nonPrintable(char c);

#endif
