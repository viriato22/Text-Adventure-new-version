#include "vector.h"

template <class TYPE>
vector<TYPE>::vector(){
	capacity = BLOCK;
	buffer = new TYPE[capacity];
}

template <class TYPE>
vector<TYPE>::vector(const vector& v){
	capacity = v.capacity;
	buffer = new TYPE[v.capacity];
	num_elements = v.num_elements;
	for (uint i = 0; i < num_elements; i++) buffer[i] = v.buffer[i];
}

template <class TYPE>
vector<TYPE>::vector(uint size) : capacity(size){
	buffer = new TYPE[capacity];
}

template <class TYPE>
vector<TYPE>::~vector(){
	delete[] buffer;
}

template <class TYPE>
void vector<TYPE>::pushback(const TYPE& data){
	TYPE* aux;
	if (num_elements == capacity){
		capacity += 10;
		TYPE* aux = new TYPE[capacity];
		for (int i = 0; i < num_elements; i++) aux[i] = buffer[i];
		delete[] buffer;
		buffer = aux;
	}

	buffer[num_elements] = data;
	num_elements++;
}

template <class TYPE>
void vector<TYPE>::pushback(const char& data){
	TYPE* aux;
	if (num_elements == capacity){
		capacity += 10;
		TYPE* aux = new TYPE[capacity];
		for (int i = 0; i < num_elements; i++) aux[i] = buffer[i];
		delete[] buffer;
		buffer = aux;
	}

	buffer[num_elements] = data;
	num_elements++;
}

template <class TYPE>
void vector<TYPE>::pushfront(const TYPE& data){
	if (num_elements == capacity){
		capacity += 10;
		TYPE* aux = new TYPE[capacity];
		for (int i = 0; i < num_elements; i++) aux[i] = buffer[i];
		delete[] buffer;
		buffer = aux;
	}

	for (int i = num_elements; i > 0; i--) buffer[i] = buffer[i - 1];
	buffer[0] = data;
	num_elements++;
}

template <class TYPE>
bool vector<TYPE>::popback(){
	if (num_elements > 0){
		data = buffer[--num_elements];
		return true;
	}
	else return false;
}

template <class TYPE>
bool vector<TYPE>::popfront(TYPE& data){
	if (num_elements > 0){
		data = buffer[0];
		for (int i = 0; i < num_elements; i++) buffer[i] = buffer[i + 1];
		num_elements--;
		return true;
	}
	else return false;
}

template <class TYPE>
void vector<TYPE>::pop(const uint num){
	if (num_elements > 0){
		for (int i = num; i < num_elements; i++) buffer[i] = buffer[i + 1];
		num_elements--;
	}
}

template <class TYPE>
TYPE& vector<TYPE>::operator[] (uint index){
	assert(index < num_elements);
	return buffer[index];
}

template <class TYPE>
const TYPE& vector<TYPE>::operator[] (uint index) const{
	assert(index < num_elements);
	return buffer[index];
}

template <class TYPE>
void vector<TYPE>::clean() const{
	for (int i = num_elements - 1; i >= 0; --i)
		delete buffer[i];
}

template <class TYPE>
int vector<TYPE>::size(){
	return num_elements;
}