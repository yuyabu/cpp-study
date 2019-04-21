#include<iostream>
#include<map>
#include<string>
#include<stack>

using namespace std;
int main(){
	cout << "整数の値を入力してください" << endl;

	int tmp;
	cin >> tmp;
	stack<string> stk;
	map<int,string> map;
	map[0] = "零";
	map[1] = "一";
	map[2] = "二";
	map[3]  ="三";
	map[4] = "四";
	map[5] = "五";
	map[6] = "六";
	map[7] = "七";
	map[8] = "八";
	map[9] = "九";
	//問題には文字が入力されたときの挙動には触れられていないため、入力が必ず数字であると仮定する。
	for(;;){
		int num = tmp%10;
		stk.push(map[num]);
		tmp/= 10;
		if(tmp ==0) break;
	}
	int cnt=0;
	while(!stk.empty()){
		if(cnt == 3){
			cout << ",";
			cnt = 0;
		}
		cout << stk.top();
		stk.pop();
		cnt++;
		
		
	}
	cout << endl;
}
