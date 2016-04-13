#ifndef STRING_H
#define STRING_H

#include <string.h>
#include <assert.h>
#include <stdio.h>

class String{
public:
	char* text;
	unsigned int memory;

public:
	String();
	String(unsigned int aux);
	String(const char* str);
	String(const String& str);
	~String();

public:
	unsigned int length()const;
	bool empty()const;
	bool operator==(const String& str)const;
	bool operator==(const char* str)const;
	const String& operator=(const String& str);
	const String& operator=(const char* str);
	const String& operator+=(const String& str);
	const char operator[](int aux);
};

#endif
