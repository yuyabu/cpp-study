#include "car.h"
#include <iostream>

using namespace std;

int main(){
	CCar* pC;
	cout << "test" << endl;
	pC = new CCar();
	pC->supply(10);
	pC->move();
	pC->move();
	cout << "test" << endl;
	delete pC;
	return 0;
}
