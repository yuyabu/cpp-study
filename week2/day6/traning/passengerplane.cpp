#include "passengerplane.h"

PassengerPlane::PassengerPlane()
{
	m_type = "旅客機";
}
string PassengerPlane::getType()
{
	m_type = "旅客機";
}
void PassengerPlane::fly()
{
	cout << "乗客を乗せて目的地まで飛行します。" << endl;
}
void PassengerPlane::carryPassengers()
{
	cout << "城郭を目的地まで運びます" << endl;
}
