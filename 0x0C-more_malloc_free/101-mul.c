#include "main.h"
int find_len(char *str);
char *create_array(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - Findsthe length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */
int find_len(char *str)
{
int len = 0;

while (*str++)
len++;

return (len);
}
/**
 * create_array - creates an array of chars and initializes it with
 * the character 'x'. Adds a terminating null byte
 *
