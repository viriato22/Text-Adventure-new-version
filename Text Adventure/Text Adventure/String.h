#ifndef STRING_H
#define STRING_H

#include <string.h>
#include "vector.h"

class String{
public:
	char* string;
	
private:
	unsigned int mem_size;
	
public:
	String();
	String(const char* str); 
	virtual ~String();

public:
	bool operator== (const char *other) const; 
	bool operator== (const String& other) const;
	bool operator!= (const char *other) const;
	bool operator!= (const String& other) const;
	bool operator+= (const char& key);
	const String& operator= (const char* str);
	const char operator[] (const int& aux) const;
	bool operator-- ();

public:
	unsigned int length() const;
	vector<String> tokenize();
	void tokenize(vector<String>& words);
	bool clear();
};

#endif