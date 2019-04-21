#include<iostream>
#include<set>
#include<string>

using namespace std;
int main(){
	
	cout << "英単語を入力";
	
	string input;
	cin >> input;

	cout << "使用されているアルファベット:";
	set<char> chars;	
	for(int i=0; i < (int) input.size(); ++i){
		char ch = input[i];
		chars.insert(ch);
	}
	set<char>::iterator it;
	for(it = chars.begin(); it != chars.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	
}
