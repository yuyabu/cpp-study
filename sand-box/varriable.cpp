//値渡しの基本

#include <iostream>

using namespace std;

void twice(int a){
	cout <<"@twice" << a << endl;
	a *= 2;
	cout <<"@twice" << a << endl;
}
int main()
{
	int v = 16;
	cout << "@main:" << v << endl;
	twice( v);
	cout << "@main:" <<v << endl;
}
