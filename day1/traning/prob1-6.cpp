#include<iostream>
#include<string>
using namespace std;

int main(){
	string n1,n2;
	cout << "姓を入力:" ;
	cin >> n1;
	cout << "命を入力:";
	cin >> n2;

	cout << "名前は「" << n1 + n2 << "」です。"<< endl;



	return 0;
}
