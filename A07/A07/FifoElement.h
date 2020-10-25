#ifndef FIFOELEMENT_H
#define FIFOELEMENT_H
#include <string>

template<typename T>

class FifoElement {

public:
	T value;
	FifoElement<T>* next;
	FifoElement(){}
	FifoElement(T value) : value(value), next(NULL) {}
	~FifoElement(){}
};


#endif
