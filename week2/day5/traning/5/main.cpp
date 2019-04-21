#include<iostream>
#include<queue>
#include<string>

using namespace std;
int main(){
	queue<string> words;
	for(;;){
		cout << "文字列を入力:";
		string tmp;
		getline(cin,tmp);
		if(tmp.length() ==0) break;
		words.push(tmp);
	}
	while (!words.empty()){
		cout << words.front() << endl;	
		words.pop();
	}

}
