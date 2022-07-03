#include <stdio.h>
/**
 * main - Entry point
 * Return:Always 0 (success)
 */
int main(void)
{ 
	int i;
	long int l;
	long long int ll;
	float d;
	char c; 
	printf("Size of a char :%d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(l));
	printf("Size of a long long int: %d byte(s)\n", sizeof(ll));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
