/**
*@file		Source.c
*@brief		Some code to check function accuracy
*/

#include "MyString.h"
#include "Utility.h"
#include <time.h>
#include <stdio.h>

#define BIG_INT 10000000

struct {
	char name[40];
	int age;
} person, person_copy;

int main()
{
	char* string = "Example string\x1d";
	// mymemchr
	/*char* res = (char*)mymemchr(string, 'p', 10);
	if (res != NULL)
	{
		printf("char found at position %d.\n", res - string + 1);
	}
	else
	{
		printf("char wasn't found");
	}*/
	// mymemcmp
	/*char* string1 = "Examplz";
	printf("%d\n", mymemcmp(string, string1, 7));*/
	// mymemcpy
	/*char myname[] = "Pierre de Fermat";

	// using memcpy to copy string: 
	mymemcpy(person.name, myname, strlen(myname) + 1);
	person.age = 46;

	// using memcpy to copy structure:
	mymemcpy(&person_copy, &person, sizeof(person));

	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);*/
	// mymemmove 
	/*char str[] = "memmove can be very useful......";
	mymemmove(str + 20, str + 15, 11);
	puts(str);*/
	// mymemset
	/*char str[] = "almost every programmer...";
	mymemset(str, '*', 6);
	puts(str);*/
	// mystrcat
	/*char str[80];
	mystrcpy(str, "these \x1d");
	mystrcat(str, "strings \x1d");
	mystrcat(str, "are \x1d");
	mystrcat(str, "concatenated.\x1d");
	print(str);*/
	// mystrncat
	/*char str1[20];
	char str2[20];
	mystrcpy(str1, "To be \x1d");
	convert(str1);
	mystrcpy(str2, "or not to be\x1d");
	convert(str2);
	mystrncat(str1, str2, 6);
	print(str1);*/
	// mystrchr
	/*char str[] = "This is a sample string\x1d";
	char * pch;
	printf("Looking for the 's' character in \"%s\"...\n", str);
	pch = mystrchr(str, 's');
	while (pch != NULL)
	{
		printf("found at %d\n", pch - str + 1);
		pch = mystrchr(pch + 1, 's');
	}*/
	// mystrcmp
	/*char* string1 = "Exampla\x1d";
	printf("%d\n", mystrcmp(string, string1));*/
	// mystrncmp
	/*char* string1 = "Example\x1d";
	printf("%d\n", mystrncmp(string, string1, 9));
	char str[][5] = { "R2D2\x1d", "C3PO\x1d", "R2A6\x1d" };
	int n;
	puts("Looking for R2 astromech droids...");
	for (n = 0; n<3; n++)
	if (mystrncmp(str[n], "R2xx", 2) == 0)
	{
		printf("found ");
		print(str[n]);
		printf("\n");
	}*/
	// mystrcpy
	/*char arr[] = "Sample string\x1d";
	char str1[40];
	char str2[40];
	mystrcpy(str1, arr);
	mystrcpy(str2, "copy\x1d");
	int q = 0;
	print(str1);
	printf("\n");
	print(str2);*/
	// mystrncpy
	/*char str1[] = "To be or not to be\x1d";
	char str2[40];
	char str3[40];

	// copy to sized buffer (overflow safe): 
	mystrncpy(str2, str1, sizeof(str2));

	// partial copy (only 5 chars): 
	mystrncpy(str3, str2, 5);
	str3[5] = '\x1d';   // terminating character manually added 

	print(str1);
	printf("\n");
	print(str2);
	printf("\n");
	print(str3);*/
	// mystrcspn
	/*char key[] = "fbcs73\x1d";
	char value[] = "1234567890\x1d";
	int i = mystrcspn(key, value);
	printf("%d\n", i);*/
	// mystrlen
	/*char arr[] = "Be or not to be? That's the question...\x1d";
	char* ptr = "Be or not to be? That's the question...\x1d";
	printf("%d\n%d", mystrlen(arr), mystrlen(ptr));*/
	// mystrpbrk
	/*char str[] = "This is a sample string\x1d";
	char key[] = "aeiou\x1d";
	char* p = mystrpbrk(str, key);
	while (p != NULL)
	{
		printf("%c", *p);
		p = mystrpbrk(p + 1, key);
	}*/
	// mystrrchr
	/*char str[] = "This is a sample string\x1d";
	char* p = mystrrchr(str, 's');
	printf("%d", p - str + 1);*/
	// mystrspn
	/*int i;
	char strtext[] = "129th\x1d";
	char cset[] = "1234567890\x1d";
	i = mystrspn(strtext, cset);
	printf("The initial number has %d digits.\n", i);*/
	// mystrstr
	/*char str[] = "This is a simple string\x1d";
	char * pch;
	pch = mystrstr(str, "simple\x1d");
	mystrncpy(pch, "sample", 6);
	print(str);*/
	// mystrtok
	/*char str[] = "- This, a sample string.\x1d";
	char * pch;
	printf("Splitting string \"%s\" into tokens:\n", str);
	pch = mystrtok(str, " ,.-\x1d");
	while (pch != NULL)
	{
		print(pch);
		printf("\n");
		pch = mystrtok(NULL, " ,.-\x1d");
	}*/

	// memcpy time test
	/*void* ptr1 = malloc(BIG_INT);
	void* ptr2 = malloc(BIG_INT);
	time_t t = clock();
	mymemcpy(ptr2, ptr1, BIG_INT);
	t = clock() - t;
	printf("mymemcpy time: %d\n", (long long)t);
	t = clock();
	memcpy(ptr2, ptr1, BIG_INT);
	t = clock() - t;
	printf("memcpy time: %d\n\n", (long long)t);
	free(ptr1);
	free(ptr2);*/

	getchar();
}
