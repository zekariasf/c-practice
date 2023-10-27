#include <stdio.h>

extern int add(int a, int b);
extern int subtract(int a, int b);
extern int str_length(const char* str);
extern void reverse_string(char* str);

int main()
{
	int x = 10, y = 5;
	printf("addition: %d\n", add(x, y));
	printf("subtraction: %d\n", subtract(x, y));

	char myString[] = "Hello, World!";
	printf("Length of the string: %d\n", str_length(myString));
	reverse_string(myString);
	printf("Reverse string: %s\n", myString);

	return 0;
}
