#include <stdio.h>
#include <assert.h>
#include "String.h"

#define BUFFER 25

String::String(){
	string = new char[BUFFER];
	string[0] = '\0';
	mem_size = BUFFER;
}

String::String(const char* other){
	assert(other != NULL);
	string = new char[strlen(other) + 1];
	strcpy_s(string, strlen(other) + 1, other);
	mem_size = length() + 1;
}

String::~String(){
	delete[] string;
}

unsigned int String::length() const{
	return strlen(string);
}

vector<String> String::tokenize(){
	vector<String> words;

	for (int i = 0; string[i] != '\0'; i++){
		if ((string[i] > 'A') && (string[i] < 'Z')) string[i] = string[i] + 32;
	}

	String aux;

	for (int i = 0; string[i] != '\0'; i++){
		if (string[i] != ' ' && string[i] != ',' && string[i] != ';' && string[i] != ':'){
			aux += string[i];
		}
		else{
			aux += '\0';
			words.pushback(aux);
			aux = "\0";
		}
	}

	aux += '\0';
	words.pushback(aux);

	return words;
}

void String::tokenize(vector<String>& words){
	words.num_elements = 0;

	for (int i = 0; string[i] != '\0'; i++){
		if ((string[i] > 'A') && (string[i] < 'Z')) string[i] = string[i] + 32;
	}

	String aux;

	for (int i = 0; string[i] != '\0'; i++){
		if (string[i] != ' ' && string[i] != ',' && string[i] != ';' && string[i] != ':'){
			aux += string[i];
		}
		else{
			words.pushback(aux);
			aux = "\0";
		}
	}
	words.pushback(aux);
}

bool String::operator== (const char *other) const{
	if (strcmp(string, other)) return 0;
	else return 1;
}

bool String::operator== (const String& other) const{
	if (strcmp(string, other.string)) return 0;
	else return 1;
}

bool String::operator!= (const char *other) const{
	if (strcmp(string, other)) return 1;
	else return 0;
}

bool String::operator!= (const String& other) const{
	if (strcmp(string, other.string)) return 1;
	else return 0;
}

const String& String::operator= (const char *other){
	if (mem_size < strlen(other) + 1){
		delete[] string;
		string = new char[strlen(other) + 1];
		mem_size = length() + 1;
	}
	strcpy_s(string, strlen(other) + 1, other);

	return *this;
}

const char String::operator[] (const int& aux) const{
	return string[aux];
}

bool String::operator+= (const char& key){
	int size = length();

	if (mem_size < size + 2){
		String temp = string;
		delete[] string;
		string = new char[size + 8];
		mem_size = size + 8;
		for (int aux = 0; aux < temp.length(); aux++){
			string[aux] = temp[aux];
		}
	}

	string[size] = key;
	string[size + 1] = '\0';
	return true;
}

bool String::operator-- (){
	if (length() > 0){
		string[length() - 1] = '\0';
		return true;
	}
	else{
		return false;
	}
}

bool String::clear(){
	string[0] = '\0';
	return true;
}