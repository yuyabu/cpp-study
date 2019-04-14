#include <iostream>
#include <string>

using namespace std;

template <typename T> T max(T a1, T a2){
	if ( a1 > a2 ){
		return a1;
	}
	return a2;
}

int main(){
	cout << ::max<int>(1,2) << endl;
	cout << ::max<double>(1.75, 3.12) << endl;
	string s1 = "aiu" , s2 = "eo";
	cout << ::max<string>(s1,s2) << endl;
	return 0;
}
