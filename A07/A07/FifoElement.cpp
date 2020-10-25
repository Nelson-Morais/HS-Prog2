#include <iostream>
#include "FifoElement.h"
template <typename T>
class FifoElement
{
public:
	FifoElement(int value) : value(value), next(NULL), prev(NULL) {};
	~FifoElement();

private:
	

};
