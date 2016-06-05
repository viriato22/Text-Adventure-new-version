#ifndef VECTOR_H
#define VECTOR_H

#include <assert.h>
#include "String.h"

#define uint unsigned int
#define BLOCK 50

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
	virtual ~vector();

public:
	void pushback(const TYPE& data);
	void pushback(const char& data);
	void pushfront(const TYPE& data);
	bool popback();
	bool popfront(TYPE& data);
	void pop(const uint num);
	int size();

public:
	TYPE& operator[] (uint index);
	const TYPE& operator[] (uint index) const;
	void clean() const;

	// Empty, size, capacity, at(), shrink_to_fit();
};

#include "vector.hpp"

#endif //VECTOR_H