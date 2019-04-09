#include "calculation.h"

void Calculation::setNumber1(int n){
	num1=n;
}
void Calculation::setNumber2(int n){
	num2 = n;
}

int Calculation::getNumber1(){
	return num1;
}
int Calculation::getNumber2(){
	return num2;
}
int Calculation::add(){
	return num1 + num2;
}
int Calculation::sub(){
	return num1 - num2;
}
