/**
*@file		Utility.c
*@brief		<Utility.h> functions implementation 
*/

#include "Utility.h"
#include "MyString.h"

char* convert(char* str)
{
	*(str + strlen(str) + 1) = END;
	return str;
}

void print(const char* str)
{
	if (str)
	{
		while (*str != END)
		{
			putchar(*str);
			++str;
		}
	}
}
