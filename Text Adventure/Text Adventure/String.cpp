#include "String.h"

String::String(){
	memory = 1;
	text = new char[1];
}

String::String(unsigned int aux){
	memory = aux;
	text = new char[aux];
}

String::String(const char* str){
	assert(str != nullptr);

	memory = (strlen(str) + 1);
	text = new char[memory];

	strcpy_s(text, memory, str);
}

String::String(const String& str){
	assert(str.text != nullptr);

	memory = str.length();
	text = new char[memory];
	
	strcpy_s(text, memory, str.text);
}

String::~String(){
	delete[]text;
}

unsigned int String::length() const{
	return strlen(text) + 1;
}

bool String::empty()const{
	return text[0] == '\0';
}

bool String::operator==(const String& str) const{
	return !strcmp(str.text, text);
}

bool String::operator==(const char* str) const{
	return !strcmp(str, text);
}

const String& String::operator=(const String& str){
	if (memory < str.length()){
		delete[]text;
		memory = str.length();
		text = new char[memory];
	}

	strcpy_s(text, str.length(), str.text);
	return *this;
}

const String& String::operator=(const char* str){
	if (memory < strlen(str)){
		delete[]text;
		memory = strlen(str);
		text = new char[memory];
	}

	strcpy_s(text, (strlen(str) + 1), str);
	return *this;
}

const String& String::operator+=(const String& str){
	assert(str.text != nullptr);

	int size = str.length() + length() - 1;

	if (size > memory){
		char* aux = text;
		delete[]text;
		text = new char[size];
	}

	strcat_s(text, str.length(), str.text);

	return *this;
}

const char String::operator[](int aux){
	assert(text != nullptr);

	return text[aux];
}