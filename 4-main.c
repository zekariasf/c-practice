#include <stdio.h>
/**
 * main - storing the address of variable into a pointer
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Address of 'n': %p\n", &n);
	printf("value of 'p': %p\n", p);
	return (0);
}
