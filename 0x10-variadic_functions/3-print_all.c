#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of all arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
unsigned int i;
va_list args;
char *s, *separator;

va_start(args, format);

separator = " ";

i = 0;
while (format && format[i]
{
switch (format[i])
{
case 'c'
