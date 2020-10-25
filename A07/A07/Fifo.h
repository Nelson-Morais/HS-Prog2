#ifndef FIFO_H
#define FIFO_H
#include "FifoElement.h"
#include <string>
#include <iostream>

template<typename T>
class Fifo {
	

private:
	
	FifoElement<T>* top= nullptr;
	FifoElement<T>* rear= nullptr;

public:
	Fifo(): top(nullptr), rear(nullptr){}

	Fifo(const Fifo<T>& t) {
		top = nullptr;
		copy(t);
	}

	~Fifo() {
		for (int i = 0; i < size(); i++) {
			pop();
		}
	}

	T pop() throw(){
		FifoElement<T>* tmp = top;
		if (tmp != nullptr) {
			string value = tmp->value;
			top = tmp->next;
			delete tmp;
			return value;
		}else{
		throw "Unterlauf";
		}
	}


	void push(const T& t) {
		try {
			FifoElement<T>* tmp = new FifoElement<T>;
			tmp->value = t;
			tmp->next = nullptr;
			if (top == nullptr) {
				top = tmp;
			}
			else {
				FifoElement<T>* tmp2 = rear;
				tmp2->next = tmp;
			}
			rear = tmp;
		}
		catch (bad_alloc e) {
			throw "elemente koennte nicht erzeugt werden";
		}
	}

	int size() const {
		if (top == nullptr) {
			return 0;
		}
		int counter = 1;
		FifoElement<T>* current = top;

		while (current->next != nullptr) {
			counter++;
			current = current->next;
		}
		return counter;
	}

	void info() const {
		cout << "Inhalt des Fifos:" << endl;
		FifoElement<T>* current = top;

		while (current != nullptr) {
			cout << current->value << endl;
			current = current->next;
		}
	}

	void copy(const Fifo<T>& t) {
		if (*this == t) {
			cout << "Selbstzuweisung: Es wird keine Kopie durchgefuehrt." << endl;
			return;
		}
		FifoElement<T>* current = t.top;
		while (current != nullptr) {
			push(current->value);
			current = current->next;
		}
	}

	Fifo& operator <<(const T& t) {
		try {
			push(t);
			return *this;
		}
		catch (bad_alloc e) {
			throw "elemente koennte nicht erzeugt werden";
		}
	}

	Fifo& operator >>(T& t) {
		t = pop();
		return *this;
	}

	operator int() const {
		return size();
	}

	void operator= (const Fifo<T>& t) {
		copy(t);
	}
};

#endif
