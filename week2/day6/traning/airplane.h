#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include<iostream>
#include<string>

using namespace std;
class Airplane{
	protected:
		string m_type;
	public:
		
		virtual void fly()=0;
		string getType(){ return m_type;}
};

#endif // _AIRPLANE_H_
