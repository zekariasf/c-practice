#include<string.h>

int str_length(const char* str)
{
	return strlen(str);
}

void reverse_string(char* str)
{
	int len = str_length(str);
	for (int i = 0; i < len/2; i++)
	{
		char tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i -1] = tmp;
	}
}
