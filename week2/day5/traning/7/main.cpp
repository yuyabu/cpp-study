#include<iostream>
#include<stack>

using namespace std;
int main(){
	cout << "英単語を入力:";
	string tmp;
	cin >> tmp;
	stack<char> stk;
	for(int i;i < (int)tmp.length(); i++){
		stk.push(tmp[i]);
	}
	while(!stk.empty()){
		cout << stk.top() ;
		stk.pop();
	}
	cout << endl;

}
