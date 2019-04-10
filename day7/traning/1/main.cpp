#include <iostream>
#include "counter.h"

using namespace std;

int main(){
	Counter *pc = new Counter();
	pc->count();
	pc->count();
	cout << "now count is :" << pc->getCount() << endl;
	pc->count(4);
	cout << "now count is :" << pc->getCount() << endl;
	pc->reset();
	cout << "now count is :" << pc->getCount() << endl;
	delete pc;
	return 0;
}
