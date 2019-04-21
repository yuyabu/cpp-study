#include<iostream>
#include<map>
#include<string>

using namespace std;
int main(){
	map <string ,string> dict;
	dict["cat"] = "猫";
	dict["dog"] = "犬";
	dict["bird"] = "鳥";
	dict["tiger"] = "トラ";

	string tmp;
	cout << "英語で動物の名前を入力してください:";
	cin >> tmp;
	cout << "「" << dict[tmp] << "」です。";
	
}
