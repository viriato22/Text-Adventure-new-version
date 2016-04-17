#ifndef vector_H
#define vector_H

#include <assert.h>
#include "String.h"

#define uint unsigned int
#define BLOCK 10 

template <class TYPE>
class vector{
public:
	TYPE* buffer;
	uint capacity;
	uint num_elements = 0;

public:
	vector();
	vector(const vector& v);
	vector(uint size);
	~vector();

public:
	void pushback(const TYPE num);
	void pushfront(const TYPE num);
	bool popback(TYPE& data);
	bool popfront(TYPE& data);
	TYPE& operator[] (uint index);
	const TYPE& operator[] (uint index) const;
	void tokenize(char* text, vector<TYPE>& words);
	// Empty, clean(destroy all the elements), size, capacity, at(), shrink_to_fit();
	void read();
};

#include "vector.hpp"

#endif