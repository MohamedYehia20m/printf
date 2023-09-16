#ifndef MAIN_H_
#define MAIN_H_

/************************************************/
/******************* Includes *******************/
/************************************************/

#include <stdarg.h>
#include <stddef.h>


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
}spec_t;


/************************************************/
/****************** Prototypes ******************/
/************************************************/

/*************** Basic Functions ****************/
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _atoi(char *s);

/**************** Task Functions ****************/
int _printf(const char *format, ...);

#endif
