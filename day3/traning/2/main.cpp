#include <iostream>
#include "twostrings.h"

using namespace std;

int main(){
	TwoStrings s;
	s.setString1("hello");
	s.setString2("world");
	cout << "１つめの文字列は" << s.getString1() << endl;
	cout << "２つ目の文字列は" << s.getString2() << endl;
	cout << "２つの文字列を合成したものは" << s.getConnectedString() << endl;
	cout << "合成した文字の長さは" << s.getConnectedLength() << "文字" << endl;
	return 0;
}
