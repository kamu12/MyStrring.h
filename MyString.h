/**
*@file		MyString.h
*@brief		<string.h> functions declarations
*/

#ifndef _MY_STING_H_
#define _MY_STING_H_

#define NULL 0
#define ONE 1
#define MINUS_ONE -1
#define END 29

typedef unsigned int size_t;

/*
*@brief	Searches for the first occurrence of the character c (an unsigned char)
		in the first n bytes of the string pointed to, by the argument str.
*/
void* mymemchr(const void* str, int c, size_t n);

/*
*@brief	Compares the first n bytes of str1 and str2.
*/
int mymemcmp(const void* str1, const void* str2, size_t n);

/*
*@brief	Copies n characters from src to dest.
*/
void* mymemcpy(void* dest, const void* src, size_t n);

/*
*@brief	Move block of memory
*/
void* mymemmove(void* dest, const void* src, size_t n);

/*
*@brief	Copies the character c (an unsigned char) to the first n characters of
		the string pointed to, by the argument str.
*/
void* mymemset(void* str, int c, size_t n);

/*
*@brief	Appends the string pointed to, by src to the end of the string 
		pointed to by dest.
*/
char* mystrcat(char* dest, const char* src);

/*
*@brief	Appends the string pointed to, by src to the end of the string
		pointed to, by dest up to n characters long.
*/
char* mystrncat(char* dest, const char* src, size_t n);

/*
*@brief	Searches for the first occurrence of the character c (an unsigned char)
		in the string pointed to, by the argument str.
*/
char* mystrchr(const char* str, int c);

/*
*@brief	Compares the string pointed to, by str1 to the string pointed
		to by str2.
*/
int mystrcmp(const char* str1, const char* str2);

/*
*@brief	Compares at most the first n bytes of str1 and str2.
*/
int mystrncmp(const char* str1, const char* str2, size_t n);

/*
*@brief	Compares string str1 to str2. The result is dependent on the LC_COLLATE
		setting of the location.
*/
int mystrcoll(const char* str1, const char* str2);

/*
*@brief	Copies the string pointed to, by src to dest.
*/
char* mystrcpy(char* dest, const char* src);

/*
*@brief	Copies up to n characters from the string pointed to, by src to dest.
*/
char* mystrncpy(char* dest, const char* src, size_t n);

/*
*@brief	Calculates the length of the initial segment of str1 which consists
		entirely of characters not in str2.
*/
size_t mystrcspn(const char* str1, const char* str2);

/*
*@brief	Searches an internal array for the error number errnum and returns
		a pointer to an error message string.
*/
char* mystrerror(int errnum);

/*
*@brief	Computes the length of the string str up to but not including
		the terminating character.
*/
size_t mystrlen(const char* str);

/*
*@brief	Finds the first character in the string str1 that matches
		any character specified in str2.
*/
char* mystrpbrk(const char* str1, const char* str2);

/*
*@brief	Searches for the last occurrence of the character c (an unsigned char)
		in the string pointed to by the argument str.
*/
char* mystrrchr(const char* str, int c);

/*
*@brief	Calculates the length of the initial segment of str1 which consists
		entirely of characters in str2.
*/
size_t mystrspn(const char* str1, const char* str2);

/*
*@brief	Finds the first occurrence of the entire string needle (not including
		the terminating character) which appears in the string haystack.
*/
char* mystrstr(const char* haystack, const char* needle);

/*
*@brief	Breaks string str into a series of tokens separated by delim.
*/
char* mystrtok(char* str, const char* delim);

/*
*@brief	Transforms the first n characters of the string src into corrent
		locale and places them in the string dest.
*/
size_t strxfrm(char *dest, const char *src, size_t n);

#endif /*_MY_STING_H_*/
