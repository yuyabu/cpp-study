#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

using namespace std;

class CData{
	private:
		int number;
		string comment;
	public:
		void init();
		int getNumber();
		string getComment();
		void setNumber(int n);
		void setComment(string n);
};
#endif // _CDATA_H_
