#include "calc.h"
#include <iostream>

using namespace std;

CCalc::CCalc() :m_a(0), m_b(0){
	cout << "default constructer" << endl;
}

CCalc::CCalc(int a,int b): m_a(a), m_b(b){
	cout << "non default constructer" << endl;
}

int CCalc:: add(int a,int b){
	return a+b;
}
int CCalc:: add(){
	return m_a + m_b;
}

void CCalc::setValue(int a,int b){
	m_a = a;
	m_b = b;
}

int CCalc::getA(){
	return m_a;
}
int CCalc::getB(){
	return m_b;
}

