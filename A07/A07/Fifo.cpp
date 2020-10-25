#include<iostream>

template <typename T>


#include "FifoElement.h"
#include "Fifo.h"
	
	Fifo::Fifo() : elements(0), top(NULL) {}
	~Fifo() {


	}

	void push(const string& element) {
		FifoElement* tmp = new FifoElement;
		tmp->value = element;
		tmp->next = NULL;
		if (top == NULL) {
			top = tmp;
		}
		else {
			FifoElement* tmp2 = prev;
			tmp2->next = tmp;
		}
		prev = tmp;
		elements++;

	}

	T pop() {
		if (top == null) {
			cout << "underflow";
		}
		FifoElement* tmp = top;
		string value = tmp->value;
		top = tmp->next;
		delete tmp;
		elements--;
		return value;
	}

	Fifo& Operator << (const& T) {

	}

	operator int() const {
		return elements;
	}


