#include "main.h"

/**
 * _strchr - locate a character ina a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurence of the character c in a string s
 */

char *_strchr(char *s, char c)
{
while (*s != '\0') /*Declaring WHILE*/
{
if (*s == c) /*if s == c*/
{
return (s); /*return s*/
}
++s;
}

if (*s == c)
{
return (s);
}

return (0);/* values null*/
}
