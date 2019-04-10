#include "ambulance.h"
#include <iostream>

using namespace std;

CAmbulance::CAmbulance() : m_number(119)
{
	cout << "Ambulance Created" << endl;
}
CAmbulance::~CAmbulance()
{
	cout << "CAmbulance Deleted" << endl;
}

void CAmbulance::sevePeople(){
	cout << " save action" << endl << "call :" << m_number << endl;
}
