#include "number.h"

void Number::setNumbers(int n1, int n2)
{
	a = n1;
	b = n2;
}
int Number::getAdd()
{
	return a + b;
}
Number::Number() : a(0),b(0) {}
Number::~Number(){}
