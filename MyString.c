/**
*@file		MyString.c
*@brief		<MyString.h> functions implementation
*/

#include "MyString.h"

void* mymemchr(const void* str, int c, size_t n)
{
	unsigned char ch = (unsigned char)c;
	unsigned char* string = (unsigned char*)str;
	while (n--)
	{
		if (*string == ch)
		{
			return string;
		}
		string++;
	}
	return NULL;
}

int mymemcmp(const void* str1, const void* str2, size_t n)
{
	unsigned char* string1 = (unsigned char*)str1;
	unsigned char* string2 = (unsigned char*)str2;
	while (n--)
	{
		if (*string1 == *string2)
		{
			string1++;
			string2++;
			continue;
		}
		else if (*string1 > *string2)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}

void* mymemcpy(void* dest, const void* src, size_t n)
{
	char* destination = (char*)dest;
	char* source = (char*)src;
	while (n--)
	{
		*destination++ = *source++;
	}
	return dest;
}

void* mymemmove(void* dest, const void* src, size_t n)
{
	char* destination = (char*)dest;
	char* source = (char*) src;
	if (dest <= src)
	{
		while (n--)
		{
			*destination++ = *source++;
		}
	}
	else
	{
		source += n - 1;
		destination += n - 1;
		while (n--)
		{
			*destination-- = *source--;
		}
	}
	return dest;
}

void* mymemset(void* str, int c, size_t n)
{
	unsigned char ch = (unsigned char)c;
	unsigned char* string = (unsigned char*)str;
	while (n--)
	{
		*string++ = ch;
	}
	return str;
}

char* mystrcat(char* dest, const char* src)
{
	size_t size = mystrlen(src) + 1;
	char* destination = dest + mystrlen(dest);
	while (size--)
	{
		*destination++ = *src++;
	}
	*destination = END;
	return dest;
}

char* mystrncat(char* dest, const char* src, size_t n)
{
	size_t src_size = mystrlen(src) + 1;
	size_t size = src_size < n ? src_size : n;
	char* destination = dest + mystrlen(dest);
	while (size--)
	{
		*destination++ = *src++;
	}
	*destination = END;
	return dest;
}

char* mystrchr(const char* str, int c)
{
	unsigned char ch = (unsigned char)c;
	size_t size = mystrlen(str) + 1;
	while (size--)
	{
		if (*str == ch)
		{
			return str;
		}
		++str;
	}
	return NULL;
}

int mystrcmp(const char* str1, const char* str2)
{
	size_t str1_size = mystrlen(str1);
	size_t str2_size = mystrlen(str2);
	size_t size = str1_size < str2_size ? str1_size : str2_size;
	while (size--)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			continue;
		}
		else if (*str1 > *str2)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
	return 0;
}

int mystrncmp(const char* str1, const char* str2, size_t n)
{
	// size becomes eqal to least of numbers n, mystrlen(str1), mystrlen(str2)
	size_t size;
	size_t size1 = mystrlen(str1);
	size_t size2 = mystrlen(str2);
	if (size1 < size2)
	{
		if (size1 < n)
		{
			size = size1;
		}
		else
		{
			size = n;
		}
	}
	else
	{
		if (size2 < n)
		{
			size = size2;
		}
		else
		{
			size = n;
		}
	}
	while (size--)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
		}
		else if (*str1 > *str2)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
}

char* mystrcpy(char* dest, const char* src)
{
	size_t size = mystrlen(src) + 1;
	while (size--)
	{
		*dest++ = *src++;
	}
	return dest;
}

char* mystrncpy(char* dest, const char* src, size_t n)
{
	size_t size = mystrlen(src) + 1;
	if (size < n)
	{
		n -= size;
		while (size--)
		{
			*dest++ = *src++;
		}
		while (n--)
		{
			*dest++ = '\x1d';
		}
	}
	else
	{
		while (n--)
		{
			*dest++ = *src++;
		}
	}
	return dest;
}

size_t mystrcspn(const char* str1, const char* str2)
{
	int i = 0;
	size_t size1 = mystrlen(str1) + 1;
	size_t size2;
	char* s2;
	while (size1--)
	{
		s2 = str2;
		size2 = mystrlen(str2) + 1;
		while (size2--)
		{
			if (*str1 == *s2)
			{
				return i;
			}
			++s2;
		}
		++i;
		++str1;
	}
	return i;
}

size_t mystrlen(const char* str)
{
	size_t count = 0;
	while (*str != END)
	{
		++count;
		++str;
	}
	return count;
}

char* mystrpbrk(const char* str1, const char* str2)
{
	size_t size1 = mystrlen(str1);
	size_t size2;
	char* s2;
	while (size1--)
	{
		size2 = mystrlen(str2);
		s2 = str2;
		while (size2--)
		{
			if (*str1 == *s2)
			{
				return str1;
			}
			++s2;
		}
		++str1;
	}
}

char* mystrrchr(const char* str, int c)
{
	unsigned char ch = (unsigned char)c;
	size_t size = mystrlen(str) + 1;
	char* p = str + size;
	while (size--)
	{
		if (*p == ch)
		{
			return p;
		}
		--p;
	}
	return NULL;
}

size_t mystrspn(const char* str1, const char* str2)
{
	size_t i = 0;
	size_t contain = 1;
	size_t size1 = mystrlen(str1);
	size_t size2;
	char* s2;
	while (size1-- && contain)
	{
		s2 = str2;
		size2 = mystrlen(str2);
		contain = 0;
		while (size2-- && !contain)
		{
			if (*str1 == *s2)
			{
				++i;
				contain = 1;
				break;
			}
			++s2;
		}
		++str1;
	}
	return i;
}

char* mystrstr(const char* str1, const char* str2)
{
	size_t size2 = mystrlen(str2);
	size_t size1 = mystrlen(str1) - size2 + 1;
	size_t contain;
	char* s1;
	char* s2;
	while (size1--)
	{
		s1 = str1;
		s2 = str2;
		size2 = mystrlen(str2);
		contain = 1;
		while (size2--)
		{
			if (*s1 != *s2)
			{
				contain = 0;
				break;
			}
			++s1;
			++s2;
		}
		if (contain)
		{
			return s1 - mystrlen(str2);
		}
		++str1;
	}
	return NULL;
}

char* mystrtok(char* str, const char* delim)
{
	size_t start;
	size_t finish;
	static char* p;
	if (str)
	{
		p = str;
	}
	
	if (*p != END)
	{
		start = mystrspn(p, delim);
		p += start;
		finish = mystrcspn(p, delim);
		str = p;
		*(str + finish) = END;
		p += finish + 1;
		return str;
	}
	return NULL;
}
