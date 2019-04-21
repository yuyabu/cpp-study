#include<iostream>
#include<string>
#include<stack>

using namespace std;
int main(){
	
	string tmp;
	stack<string> stk;
	for(;;){
		cout <<"文字を入力:";
		getline(cin,tmp);
		if( tmp.length() == 0) break;
		stk.push(tmp);
	}
	while(!stk.empty()){
		cout << stk.top() << endl;
		stk.pop();
	}
}

