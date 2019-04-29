#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_

#include <iostream>
#include <string>
#include "airplane.h"

using namespace std;

class PassengerPlane:public Airplane{
	protected:
		string m_type;
	public:
		PassengerPlane(){ m_type = "戦闘機";}
		string getType(){ return m_type;}
		void fly(){ cout << "乗客を乗せて目的地まで飛行します" << endl;}
		void carryPassengers(){ cout << "乗客を目的地まで運びます" << endl;}
};

#endif // _PASSENGERPLANE_H_

