/**
*@file		Utility.h
*@brief		Declaration of auxiliary functions
*/

#ifndef _UTILITY_H_
#define _UTILITY_H_

/*
*@brief	Convert standard C string into string with present terminating symbol
		(defined in MyString.h in macros END)
*/
char* convert(char* str);

/*
*@brief	Print string with present terminating symbol(defined in MyString.h in macros END)
*/
void print(const char* str);

#endif /*_UTILITY_H_*/
