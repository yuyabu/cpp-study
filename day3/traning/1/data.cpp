#include "data.h"
void CData::init()
{
	number = 0;
	comment = "";
}
int CData::getNumber()
{
	return number;
}
string CData::getComment()
{
	return comment;
}
void CData::setNumber(int n)
{
	number = n;
}
void CData::setComment(string s)
{
	comment = s;
}
