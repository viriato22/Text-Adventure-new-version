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
vector<TYPE>::vector(uint size){
	capacity = size;
	buffer = new TYPE[capacity];
}

template <class TYPE>
vector<TYPE>::~vector(){
	delete[] buffer;
}

template <class TYPE>
void vector<TYPE>::pushback(const TYPE num){
	TYPE* aux;
	if (num_elements == capacity){
		capacity += 10;
		TYPE* aux = new TYPE[capacity];
		for (int i = 0; i < num_elements; i++) aux[i] = buffer[i];
		delete[] buffer;
		buffer = aux;
	}

	buffer[num_elements] = num;
	num_elements++;
}

template <class TYPE>
void vector<TYPE>::pushfront(const TYPE num){
	if (num_elements == capacity)	{
		capacity += 10;
		TYPE* aux = new TYPE[capacity];
		for (int i = 0; i < num_elements; i++) aux[i] = buffer[i];
		delete[] buffer;
		buffer = aux;
	}

	for (int i = num_elements; i > 0; i--){
		buffer[i] = buffer[i - 1];
	}

	buffer[0] = num;
	num_elements++;
}

template <class TYPE>
bool vector<TYPE>::popback(TYPE& data){
	if (num_elements > 0){
		data = buffer[--num_elements];
	}

	return (num_elements > 0);
}

template <class TYPE>
bool vector<TYPE>::popfront(TYPE& data){
	if (num_elements > 0)
	{
		data = buffer[0];
		for (int i = 0; i < num_elements; i++) buffer[i] = buffer[i + 1];
		num_elements--;
		return true;
	}
	else return false;
}

template <class TYPE>
TYPE& vector<TYPE>::operator[] (uint index){
	//assert(index < num_element);
	return buffer[index];
}

template <class TYPE>
const TYPE& vector<TYPE>::operator[] (uint index) const{
	assert(index < num_element);
	return buffer[index];
}

template <class TYPE>
void vector<TYPE>::tokenize(char* text, vector<TYPE>& words){
	char* str = new char[10];
	int aux = 0, aux2 = 0;
	bool idea;

	while (aux < strlen(text)){
		idea = false;
		for (aux2 = 0; text[aux] != ' ' && text[aux] != '\t' && text[aux] != ',' && text[aux] != '\n' && text[aux] != '\0' ; aux2++){
			str[aux2] = text[aux];
			tolower(str[aux2]);
			aux++;
			idea = true;
		}
		words.pushback(str);
		if (idea == false){
			aux++;
		}
	}

	delete[] str;
}